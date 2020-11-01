func removeElement(nums []int, val int) int {
    var head int = 0
    var size int = len(nums)
    for i := 0; i < size; i++{
        if nums[i] != val{
            nums[head] = nums[i]
            head += 1
        }
    }
    return head
}