func Max(x, y int)int{
    if x < y{
        return y
    }
    return x
}
func maxSubArray(nums []int) int {
    var dp [20001]int
    var max_ int = nums[0]
    dp[0] = nums[0]
    for i:= 1; i < len(nums); i++{
        dp[i] = Max(dp[i-1] + nums[i], nums[i])
        max_ = Max(dp[i], max_)
    }
    return max_
}