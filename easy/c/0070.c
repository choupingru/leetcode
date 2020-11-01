int climbStairs(int n){
    int *res = calloc(46, sizeof(int));
    res[0] = 1;
    res[1] = 2;
    for(int i = 2 ; i < n; i++){
        res[i] = res[i-1] + res[i-2];
    }
    return res[n-1];
}