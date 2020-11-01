class Solution:
    def maxProfit(self, prices: 'List[int]') -> 'int':
        if not prices:
            return 0
        buy = prices[0]
        res = 0
        for price in prices:
            res = max([res, price - buy])
            buy = min([price, buy])
        return res