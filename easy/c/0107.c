/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int height(struct TreeNode* root){
    if(!root)return 0;
    int left_d = height(root->left);
    int right_d = height(root->right);
    return left_d > right_d ? left_d + 1 : right_d + 1;
}

void level_capacity(struct TreeNode* root, int level, int* level_table){
    if(!root)return;
    level_table[level] += 1;
    level_capacity(root->left, level + 1, level_table);
    level_capacity(root->right, level + 1, level_table);
}

void goDeep(struct TreeNode* root, int level, int* level_index, int** answer){
    if(!root) return;
    answer[level][level_index[level]++] = root->val;
    goDeep(root->left, level - 1, level_index, answer);
    goDeep(root->right, level - 1, level_index, answer);
}

int** levelOrderBottom(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
    int heights = height(root) ; 
    int* level_size = calloc(heights, sizeof(int));
    int** answer = calloc(heights, sizeof(int*));
    int* level_index = calloc(heights, sizeof(int));
    level_capacity(root, 0, level_size);
    for(int i = 0; i < heights; i++ ){
        answer[i] = calloc(level_size[heights - i - 1], sizeof(int));
    }
    goDeep(root, heights-1, level_index, answer);
    *returnSize = heights;
    *returnColumnSizes = calloc(heights, sizeof(int));
    for(int i = 0; i < heights; i++)(*returnColumnSizes)[i] = level_size[heights - i - 1];
    return answer;
}