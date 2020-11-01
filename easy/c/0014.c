char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize == 0)return "";
    if(strsSize == 1)return strs[0];
    int idx = -1, min = -1;
    bool flag = true;
    for(int i = 0; i < strsSize; i++){
        if(min == -1) min = strlen(strs[i]);
        else min = min < strlen(strs[i]) ? min : strlen(strs[i]);
    }
    while(++idx < min){
        for(int i = 0 ; i < strsSize; ++i){
            if(strs[i]=="")return "";
            if(strs[i][idx] != strs[0][idx]){
                flag= false;
                break;
            }
        }
        if(!flag)break;
    }
    char* res = (char*)malloc((idx+1) * sizeof(char));
    res[idx] = '\0';
    strncpy(res, strs[0], idx);
    return res;
}