func longestCommonPrefix(strs []string) string {
    if len(strs) == 0{
        return ""
    }else if len(strs) == 1{
        return strs[0]
    }
    var idx int = -1
    var flag bool = true
    
    for flag{
        idx++
        for i := 0 ; i < len(strs) ; i++{
            if idx >= len(strs[i]) {
                return strs[i]
            }
            if strs[i][idx] != strs[0][idx]{
                flag = false
                break
            }
        }    
    }
    return strs[0][0:idx]
}