/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int goDeep(struct TreeNode* root, int height){
    if(root->left == NULL && root->right == NULL){
        return height;
    }
    int left = INT_MAX, right = INT_MAX;
    if(root->left != NULL) left = goDeep(root->left, height+1);
    if(root->right != NULL) right = goDeep(root->right, height+1);
    return left > right ? right : left;
}
int minDepth(struct TreeNode* root){
    if(root == NULL) return 0;
    return goDeep(root, 1);
}