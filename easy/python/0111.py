# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def minDepth(self, root: 'TreeNode') -> 'int':
        if not root:
            return 0
        queue = [(root, 1)]
        while queue:
            next_, level = queue[0]
            queue = queue[1:]
            left, right = next_.left, next_.right
            if not left and not right:
                return level
            if left:
                queue.append((left, level+1))
            if right:
                queue.append((right, level+1))