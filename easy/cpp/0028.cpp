class Solution {
public:
    int strStr(string haystack, string needle) {
        int sz = haystack.length(), t_sz = needle.length();
        if(t_sz == 0)return 0;
        for(int i = 0 ; i < sz - t_sz + 1; i++){
            bool find = true;
            for(int j = 0 ; j < t_sz; j++){
                if(haystack[i+j] != needle[j]){
                    find = false;
                    break;
                }
            }
            if(find) return i;
        }
        return -1;
    }
};