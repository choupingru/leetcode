class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int head = digits.size() - 1;
        while(head > -1){
            if(digits[head] == 9)digits[head--] = 0;
            else{
                digits[head--] += 1;
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};