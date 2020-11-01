func isValid(s string) bool {
    var stack []byte;
    var idx int = 0;
    for len(s) > 0{
        if s[0] == '('{
            stack = append(stack, ')')
            idx++
        }else if s[0] == '['{
            stack = append(stack, ']')
            idx++
        }else if s[0] == '{'{
            stack = append(stack, '}')
            idx++
        }else if idx == 0 || stack[idx-1] != s[0]{
            return false
        }else{
            stack = stack[:len(stack)-1]
            idx--
        }
        s = s[1:]
    }
    if idx != 0 {
        return false
    }
    return true
    
}