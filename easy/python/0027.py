class Solution:
    def removeElement(self, nums: 'List[int]', val: 'int') -> 'int':
        head = 0
        for n in nums:
            if n != val:
                nums[head] = n
                head += 1
        return head
        