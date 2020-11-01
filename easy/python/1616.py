def checkPalindrome(input):
    while input[0] == input[-1]:
        input = input[1:-1]
        if not input:
            return True
    return False
    
class Solution:
    def checkPalindromeFormation(self, a: str, b: str) -> bool:
        sz = len(a)
        ah, at, bh, bt = 0, sz-1, 0, sz-1
        if sz <= 2:return True
        while ah < sz and a[ah] == b[bt] :
            ah += 1
            bt -= 1
            if ah >= bt:
                return True
        if checkPalindrome(a[:ah] + b[-bt-1:]): return True
        if checkPalindrome(a[:bt+1] + b[-ah:]): return True
        ah, at, bh, bt = 0, sz-1, 0, sz-1
        while bh < sz and b[bh] == a[at]:
            bh += 1
            at -= 1
            if bh >= at:
                return True
        if checkPalindrome(b[:bh] + a[-at-1:]): return True
        if checkPalindrome(b[:at+1] + a[-bh:]): return True
        return False
            
            