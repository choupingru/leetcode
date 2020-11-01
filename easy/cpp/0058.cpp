class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.length();
        int ans = 0;
        int prev = 0;
        for(int i = 0; i < size; i++){
            if(s[i] != ' '){
                ans++;
            }else{
                prev = ans != 0 ? ans : prev;
                ans = 0;
            }
        }
        if(ans != 0) return ans;
        return prev;
    }
};