class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int dp[20001] = {0};
        dp[0] = nums[0];
        int max_ = dp[0];
        for(int i = 1 ; i < size; i++){
            dp[i] = nums[i] < dp[i-1] + nums[i] ? dp[i-1] + nums[i] : nums[i];
            max_ = max_ < dp[i] ? dp[i] : max_;
        }
        return max_;
    }
};