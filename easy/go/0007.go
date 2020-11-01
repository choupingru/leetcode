func reverse(x int) int {
   	var ans int = 0
   	for x != 0{
   		ans = ans * 10 + x % 10
   		x = x / 10
   	}
    if ans > math.MaxInt32 || ans < math.MinInt32{
        return 0
    }
   	return ans
}