int* plusOne(int* digits, int digitsSize, int* returnSize){
    int head = digitsSize - 1;
    while(head > -1){
        if(digits[head] == 9)digits[head] = 0;
        else{
            digits[head] += 1;
            *returnSize = digitsSize;
            return digits;
        }
        head--;
    }
    int* res = calloc((digitsSize + 1), sizeof(int));
    if(digits[0] == 10)for(int i = 1 ; i <= digits; i++) res[i] = digits[i-1];
    res[0] = 1;
    *returnSize = digitsSize + 1;
    return res;
}