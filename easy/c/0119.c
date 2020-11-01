

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    int* ret = calloc(rowIndex+1, sizeof(int));
    ret[0] = 1;
    *returnSize = rowIndex+1;
    if(!rowIndex)return ret;
    int cnt = 1;
    while(cnt <= rowIndex){
        int* prev = ret;
        int *next = calloc(cnt+1, sizeof(int));
        next[0] = 1;
        for(int i = 1 ; i < cnt; i++){
            next[i] = ret[i-1] + ret[i];
        }
        next[cnt] = 1;
        cnt++;
        ret = next;
    }
    return ret;
}