class Solution:
    def searchInsert(self, nums: 'List[int]', target: 'int') -> 'int':
        for idx, i in enumerate(nums):
            if i == target:
                return idx
            if i > target:
                return idx
        return len(nums)
        # left = 0
        # right = len(nums) -1
        # index = -1
        # if left == right:
        #     if nums[0] >= target:
        #         return 0
        #     else:
        #         return 1
        # while left < right:
        #     m = int((right + left)/2)
        #     if nums[m] < target:
        #         left = m + 1
        #     elif nums[m] > target:
        #         right = m - 1
        #     else:
        #         if nums[m] != target:
        #             break
        #         else:
        #             index = m
        #             break
        # final_index = int((left+right)/2)
        # if index == -1:
        #     if nums[final_index] >= target:
        #         if final_index -1 <0:
        #             return 0
        #         return final_index
        #     elif nums[final_index] < target:
        #         return final_index+1
        # else:
        #     return index