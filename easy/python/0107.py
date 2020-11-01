# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
from collections import defaultdict

def goDeep(root, level, table):
    if not root:
        return 
    table[level].append(root.val)
    goDeep(root.left, level + 1, table)
    goDeep(root.right, level + 1, table)
    
    

class Solution:
    def levelOrderBottom(self, root: 'TreeNode') -> 'List[List[int]]':
        table = defaultdict(list)
        goDeep(root, 0, table)
        res = sorted([info for info in table.items()], reverse=True)
        res = [info[1] for info in res]
        return res
            