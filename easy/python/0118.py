class Solution:
    def generate(self, numRows: 'int') -> 'List[List[int]]':
        if not numRows:
            return []
        row = [[1]]
        while numRows > 1:
            last = row[-1]
            new = []
            for i in range(1, len(last)):
                new += [last[i] + last[i-1]]
            new = [1] + new + [1]
            row.append(new)
            numRows -= 1
        return row
        