class Solution:
    def climbStairs(self, n: 'int') -> 'int':
        temp = [0 for i in range(46)]
        temp[0] = 1
        temp[1] = 2
        for i in range(2, n):
            temp[i] = temp[i-2] + temp[i-1]
        return temp[n-1]