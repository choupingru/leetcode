func countAndSay(n int) string {
    start := "1"
    var epoch int = 1
    var i int = 1
    
    for epoch < n{
        var new_start []string;
        cnt := 1    
        for i = 1; i < len(start); i++{
            if start[i] != start[i-1]{
                new_start = append(new_start, strconv.Itoa(cnt))
                new_start = append(new_start, string(start[i-1]))
                cnt = 0
            }
            cnt += 1
        }
        new_start = append(new_start, strconv.Itoa(cnt))
        new_start = append(new_start, string(start[i-1]))
        epoch += 1
        start = strings.Join(new_start, "")
        
    }
    return start
}