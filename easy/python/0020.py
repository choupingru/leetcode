class Solution:
    def isValid(self, s):
        table = {'(':')', '{':'}', '[':']'}
        answer = []
        while(s):
            if s[0] in ['(', '[', '{']:
                answer.append(table[s[0]])
            elif not answer or answer[-1] != s[0]:
                return False
            else:
                answer.pop()
            s = s[1:]
        if not answer: return True
        return False