class Solution:
    def maxProfit(self, prices: 'List[int]') -> 'int':
        if not prices:
            return 0
        res = 0
        for i in range(len(prices)-1):
            cur = prices[i]
            next_ = prices[i+1]
            if next_ > cur:
                res += next_ - cur
        return res