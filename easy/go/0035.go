func searchInsert(nums []int, target int) int {
    var size int = len(nums)
    for i := 0 ; i < size; i++{
        if nums[i] >= target {
            return i
        }
    }
    return size
}