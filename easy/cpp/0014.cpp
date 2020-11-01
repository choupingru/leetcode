class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = -1, idx = 0;
        bool flag = true;
        if(strs.size() == 0) return "";
        if(strs.size() == 1) return strs[0];
        while(flag){
            i++;
            idx = 1;
            flag = true;
            while(idx < strs.size()){
                if(strs[idx] == "") return "";
                if(i > strs[idx].size()) return strs[idx];
                if(strs[idx++][i] != strs[0][i]){
                    flag = false;
                    break;
                }
            }
        }
        return strs[0].substr(0, i);
    }
};