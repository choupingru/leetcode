func strStr(haystack string, needle string) int {
    if len(needle) == 0{
        return 0
    }
    var sz int = len(haystack)
    var t_sz int = len(needle)
    for i := 0; i < sz - t_sz + 1; i++{
        var find bool = true
        for j := 0; j < t_sz; j++{
            if haystack[i+j] != needle[j]{
                find = false
                break
            }
        }
        if find{
            return i
        }
    }
    return -1
}