class Solution:
    def countAndSay(self, n: 'int') -> 'str':
        start = "1"
        epoch = 1
        while epoch < n:
            new_start = ""
            cnt = 1
            prev = start[0]
            for s in start[1:]:
                if s == prev:
                    cnt += 1
                else:
                    new_start += str(cnt) + prev
                    cnt = 1
                    prev = s
            new_start += str(cnt) + prev
            epoch += 1
            start = new_start
        return start
        