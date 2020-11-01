func removeDuplicates(nums []int) int {
    if len(nums) == 0{
        return 0
    }
    var head int = 1
    var prev int = nums[0]
    var size int = len(nums)
    for i := 0 ; i < size ; i++{
        if nums[i] != prev{
            nums[head] = nums[i]
            prev = nums[i]
            head += 1
        }
    }
    return head
}