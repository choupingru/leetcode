/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


class Solution {
    
public:
    TreeNode* goDeep(vector<int>& nums, int low, int high){
        if(low > high)return NULL;
        int middle = (high + low) / 2;
        TreeNode* root = new TreeNode(nums[middle]);
        root->left = goDeep(nums, low, middle-1);
        root->right = goDeep(nums, middle+1, high);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size = nums.size();
        if(size == 0) return NULL;
        TreeNode* ret = goDeep(nums, 0, size-1);
        return ret;
    }
};