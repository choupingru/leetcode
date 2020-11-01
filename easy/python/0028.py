class Solution:
    def strStr(self, haystack: 'str', needle: 'str') -> 'int':
        if len(needle) == 0:
            return 0
        if needle not in haystack:
            return -1
        else:
            for c in range(len(haystack)):
                if haystack[c] == needle[0]:
                    if haystack[c:c+len(needle)] == needle:
                        return c
        
                
            