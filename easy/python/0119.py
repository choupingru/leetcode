class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        start = [1]
        if not rowIndex: return start
        while rowIndex:
            next_start = []
            for i in range(len(start) - 1):
                next_start.append(start[i] + start[i+1])
            start = [1] + next_start + [1]
            rowIndex -= 1
        return start
            