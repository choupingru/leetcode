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
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        deque<TreeNode*> queue;
        root->val = 1;
        queue.push_back(root);
        while(queue.size() != 0){
            TreeNode* next = queue[0];
            queue.pop_front();
            if(next->left == NULL && next->right == NULL) return next->val;
            if(next->left != NULL){
                next->left->val = next->val + 1;
                queue.push_back(next->left);
            }
            if(next->right != NULL){
                next->right->val = next->val + 1;
                queue.push_back(next->right);
            }    
        }
        return 0;
    }
};