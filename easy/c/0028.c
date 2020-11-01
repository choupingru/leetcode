int strStr(char * haystack, char * needle){
    if(strlen(needle) == 0){
        return 0;
    }
    int target_size = strlen(needle);
    int size = strlen(haystack);
    for(int i = 0 ; i < size - target_size + 1; i++){
        bool find = true;
        for(int j = 0 ; j < target_size; j++){
            if(haystack[i+j] != needle[j]){
                find = false;
                break;
            }
        }
        if(find){
            return i;
        }
    }
    return -1;
    
}