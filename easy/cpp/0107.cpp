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

int height(TreeNode* root){
    if(!root) return 0;
    int left_depth = height(root->left);
    int right_depth = height(root->right);
    return left_depth > right_depth ? left_depth + 1 : right_depth + 1;
}
void goDeep(TreeNode* root, int level, vector<vector<int>>& table){
    if(root == NULL) return;
    table[level].push_back(root->val);
    goDeep(root->left, level - 1, table);
    goDeep(root->right, level - 1, table);
}

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int height_ = height(root);
        vector<vector<int>> answer(height_);
        goDeep(root, height_ - 1, answer);
        return answer;
    }
};