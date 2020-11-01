from collections import defaultdict
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        table = defaultdict(bool)
        size = len(nums)
        for index, num in enumerate(nums):
        	if table[target - num] != False:
        		return [index, table[target - num]-1]
        	else:
        		table[num] = index+1

