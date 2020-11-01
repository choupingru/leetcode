# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

def goDeep(root, nums):
    if not nums: return []
    middle = len(nums) // 2
    root.val = nums[middle]
    if nums[:middle]:
        root.left = TreeNode(0)
        goDeep(root.left, nums[:middle])
    if nums[middle+1:]:
        root.right = TreeNode(0)
        goDeep(root.right, nums[middle+1:])
    

class Solution:
    def sortedArrayToBST(self, nums: 'List[int]') -> 'TreeNode':
        if not nums : return None
        ret = TreeNode(0)
        goDeep(ret, nums);
        return ret