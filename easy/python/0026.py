class Solution:
    def removeDuplicates(self, nums: 'List[int]') -> 'int':
        ptr = 0
        prev = None
        for ele in nums:
            if prev is None:
                ptr += 1
                prev = ele
            else:
                if ele == prev:
                    continue
                elif ele != prev:
                    nums[ptr] = ele
                    ptr += 1
                    prev = ele
        nums = nums[:ptr]
        return len(nums)