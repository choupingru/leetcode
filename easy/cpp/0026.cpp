class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int head = 1, size = nums.size(), prev = nums[0];
        for(int i = 1 ; i < size ; i++){
            if(nums[i] != prev){
                nums[head++] = nums[i];
                prev = nums[i];
            }
        }
        return head;
    }
};