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

bool checkSym(TreeNode* p, TreeNode* q){
    if(p == NULL and q == NULL) return true;
    else if(p == NULL) return false;
    else if(q == NULL) return false;
    if(p->val != q->val) return false;
    return checkSym(p->left, q->right) && checkSym(p->right, q->left);
}

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return checkSym(root, root);
    }
};