class Solution {
public:
    bool isPalindrome(int x) {
        int y = x; 
        if(y < 0)return false;
        int ans = 0;
        while(x){
            if(ans > INT_MAX / 10)return false;
            ans = ans * 10 + x % 10;
            x = x / 10;
        }
        return ans == y;
    }
};