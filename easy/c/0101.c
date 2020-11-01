/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkSym(struct TreeNode* p,struct TreeNode* q){
    if(p == NULL && q == NULL) return true;
    else if(p == NULL) return false;
    else if(q == NULL) return false;
    if(p->val != q->val) return false;
    return checkSym(p->left, q->right) && checkSym(p->right, q->left);
}
bool isSymmetric(struct TreeNode* root){
    return checkSym(root, root);
}