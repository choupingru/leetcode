class Solution:
    def addBinary(self, a: 'str', b: 'str') -> 'str':
        sizeA, sizeB = len(a) - 1, len(b) - 1
        res, c = "", 0
        while sizeA > -1 or sizeB > -1:
            if sizeA < 0: tmpa = 0
            else : tmpa = int(a[sizeA])
            if sizeB < 0: tmpb = 0
            else : tmpb = int(b[sizeB])
            sum_ = tmpa + tmpb + c
            c = sum_ // 2
            sum_ = str(sum_ % 2)
            sizeA -= 1
            sizeB -= 1
            res = sum_ + res
        return "1" * c + res