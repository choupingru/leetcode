bool isValid(char * s){
    int size = strlen(s);
    char* stack = malloc(size / 2 * sizeof(char*));
    int idx = 0 ; 
    for(int i = 0 ; i < size ; i++){
        switch(s[i]){
            case '(':
                stack[idx++] = ')';
                break;
            case '[':
                stack[idx++] = ']';
                break;
            case '{':
                stack[idx++] = '}';
                break;
            default:
                if(idx == 0 || stack[idx-1] != s[i]) return false;
                else idx--;
        }
    }
    if(idx != 0) return false;
    return true;
}