func isPalindrome(x int) bool {
    var org int = x
    var rev int = 0
    if x < 0{
        return false
    }
    for x > 0{
        if rev > math.MaxInt32 / 10{
            return false  
        } 
        rev = rev * 10 + x % 10
        x = x / 10
    }
    return rev == org
}