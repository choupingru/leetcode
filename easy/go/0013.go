func romanToInt(s string) int {
    var table = map[byte]int{'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
 	var number int = 0
 	for i := 0 ; i < len(s) - 1;i++ {
        if table[s[i]] >= table[s[i+1]]{
            number += table[s[i]]
        }else{
            number -= table[s[i]]
        }
 	}
    number += table[s[len(s)-1]]
	return number
}