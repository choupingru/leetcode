bool isPalindrome(int x){
    if(x < 0) return false;
    int temp = x;
    int reverse = 0;
    while(temp){
        if(reverse > INT_MAX / 10 || reverse < INT_MIN / 10) return false;
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }
    return reverse == x;
}