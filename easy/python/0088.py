class Solution:
    def merge(self, nums1: 'List[int]', m: 'int', nums2: 'List[int]', n: 'int') -> 'None':
        """
        Do not return anything, modify nums1 in-place instead.
        """
        h1, h2 = m-1, n-1
        last = m+n-1
        while h1 > -1 and h2 > -1:
            if nums1[h1] > nums2[h2]:
                nums1[last] = nums1[h1]
                h1 -= 1
            else:
                nums1[last] = nums2[h2]
                h2 -= 1
            last -= 1
        for i in range(h1, -1, -1):
            nums1[last] = nums1[i]
            last -= 1
        for i in range(h2, -1, -1):
            nums1[last] = nums2[i]
            last -= 1