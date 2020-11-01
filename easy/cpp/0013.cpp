class Solution {
public:
    int romanToInt(string s) {
  		map<char, int> table = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int number = 0;
        int size = s.length();
        for(int i = 0 ; i < size - 1; i++){
            if(table[s[i]] >= table[s[i+1]])number += table[s[i]];
            else number -= table[s[i]];
        }
        number += table[s[size-1]];
        return number;
    }
};