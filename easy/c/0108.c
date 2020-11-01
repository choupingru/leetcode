/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* goDeep(int* nums, int low, int high){
    if(low > high) return NULL;
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    int m = (low + high) / 2;
    root->val = nums[m];
    root->left = goDeep(nums, low, m-1);
    root->right = goDeep(nums, m+1, high);
    return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    if(numsSize == 0)return NULL;
    struct TreeNode* ret = malloc(sizeof(struct TreeNode*));;
    ret = goDeep(nums, 0, numsSize-1);
    return ret;
}