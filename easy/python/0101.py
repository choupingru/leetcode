# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isSymmetric(self, root: 'TreeNode') -> 'bool':
        if not root:
            return True
        def sym(left, right):
            if not left or not right:
                return left == right
            else:
                return left.val == right.val and sym(left.left, right.right) and sym(left.right, right.left)
        return sym(root.left, root.right)