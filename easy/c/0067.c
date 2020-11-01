char * addBinary(char * a, char * b){
    int sizeA, sizeB;
    sizeA = strlen(a) - 1;
    sizeB = strlen(b) - 1;
    bool flag = false;
    int maxlen = sizeA > sizeB ? sizeA + 3: sizeB + 3;
    char* answer;
    answer = calloc(maxlen, sizeof(char));
    char temp[2];
    temp[1] = '\0';
    while(sizeA >= 0 || sizeB >= 0){
        char a_, b_;
        a_ = sizeA >= 0 ? a[sizeA] : '0';
        b_ = sizeB >= 0 ? b[sizeB] : '0';
        temp[0] = '0';
        if(flag) temp[0] += 1;
        flag = false;
        if(a_ + b_ == 97) temp[0] += 1;
        else if(a_ + b_ == 98) flag = true;
        if(temp[0] == '2'){
            temp[0] = '0';
            flag = true;
        }
        strcat(answer, temp);
        sizeA--, sizeB--;
    }
    if(flag){
        strcat(answer, "1");
    }
    int i,j;
    i = 0, j = strlen(answer)-1;
    char tmp;
    while(i < j){
        tmp = answer[i];
        answer[i++] = answer[j];
        answer[j--] = tmp;
    }
    return answer;
}