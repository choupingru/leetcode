int getVal(char c){
    switch(c){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}
int romanToInt(char * s){
    int number = 0;
    int i = 0;
    while(s[i+1] != NULL){
        if(getVal(s[i]) >= getVal(s[i+1])) number += getVal(s[i]);
        else number -= getVal(s[i]);    
        i++;
    }
    number += getVal(s[i]);
    return number;
    
}