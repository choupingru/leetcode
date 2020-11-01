class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        for ele in zip(*strs):
            if len(set(ele)) == 1:
                res += ele[0]
            else:
                break
        return res