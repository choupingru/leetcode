

int maxSubArray(int* nums, int numsSize){
    int* dp = malloc(numsSize * sizeof(int));
    dp[0] = nums[0];
    int ans = nums[0];
    for(int i = 1; i < numsSize; i++){
        dp[i] = nums[i] < dp[i-1] + nums[i] ? dp[i-1] + nums[i] : nums[i];
        ans = ans < dp[i] ? dp[i] : ans;
    }
    return ans;
}