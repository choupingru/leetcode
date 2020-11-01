class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        map<char, char>table;
        table['('] = ')';
        table['['] = ']';
        table['{'] = '}';
        int idx = 0;
        while(s[idx]){
            if(s[idx] == '(' || s[idx] == '[' || s[idx] == '{'){
                stack.push_back(table[s[idx]]);
            }else if(stack.size() == 0 ||stack.back() != s[idx]){
                return false;
            }else{
                stack.pop_back();
            }
            idx++;
        }
        if(stack.size())return false;
        return true;
    }
};