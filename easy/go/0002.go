func twoSum(nums []int, target int) []int {
    table := make(map[int]int)
    ans := make([]int, 2)
    for i := 0; i < len(nums); i++{
        if(table[target - nums[i]] != 0){
            ans[0] = i
            ans[1] = table[target - nums[i]] - 1
            return ans
        }else{
            table[nums[i]] = i+1
        }
    }
    return ans
}