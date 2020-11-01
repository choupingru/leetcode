func addBinary(a string, b string) string {
    var maxlen int;
    var la int = len(a)
    var lb int = len(b)
    if la > lb{
        maxlen = la
    }else{
        maxlen = lb
    }
    res := make([]byte, maxlen+1)
    var c byte
    for i:= 0; i < maxlen; i++{
        var sa, sb byte
        if i < la{
            sa = a[la - i - 1] - '0'
        }
        if i < lb{
            sb = b[lb - i - 1] - '0'
        }
        sum := sa + sb + c
        if sum >= 2{
            c = 1
        }else{
            c = 0
        }
        res[maxlen - i] = sum % 2 + '0'
    }
    if c == 1{
        res[0] = '1'
        return string(res)
    }
    return string(res[1:])
}