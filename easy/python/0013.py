class Solution:
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        table = {
            'I':1,
            'IV':4,
            'V':5,
            'IX':9,
            'X':10,
            'XL':40,
            'L':50,
            'XC':90,
            'C':100,
            'CD':400,
            'D':500,
            'CM':900,
            'M':1000
        }
        roman_list = ['M','CM','D','CD','C','XC','L','XL','X','IX','V','IV','I']
        number = 0
        while len(s)!=0:
            candidate = s[:2]
            if candidate in table:
                number += table[candidate]
                s = s[2:]
            elif candidate[0] in table:
                number += table[candidate[0]]
                s = s[1:]
        return number
                