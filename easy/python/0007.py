class Solution:
    def reverse(self, x):
        INT_MAX = 2**31-1
        sign = -1 if(x<0) else 1
        x_abs = abs(x)
        x_inv = int(str(x_abs)[::-1])
        return x_inv * sign if x_inv <= INT_MAX else 0