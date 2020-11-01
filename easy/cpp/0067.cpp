#include <string> 
class Solution {
public:
    string addBinary(string a, string b) {
        int sizeA = 0, sizeB = 0;
        sizeA = a.length() - 1, sizeB = b.length() - 1;
        string answer;
        bool flag = false;
        while(sizeA >= 0 || sizeB >= 0){
            char a_, b_;
            if(sizeA >= 0) a_ = a[sizeA];
            else a_ = '0';
            if(sizeB >= 0) b_ = b[sizeB];
            else b_ = '0';
            char temp = '0';
            if(flag) temp += 1;
            flag = false;
            if(a_ + b_ == 97) temp += 1;
            else if(a_ + b_ == 98) flag = true;
            if(temp == '2'){
                temp = '0';
                flag = true;
            }
            sizeA--, sizeB--;
            answer = temp + answer;
        }
        if(flag)answer = '1' + answer;
        return answer;
    }
};