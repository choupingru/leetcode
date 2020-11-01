int maxProfit(int* prices, int pricesSize){
    if(pricesSize <= 1)return 0;
    int min = prices[0];
    int ret = 0;
    for(int i = 1 ; i < pricesSize; i++){
        if(prices[i] - min > 0){
            ret += prices[i] - min;
            min = prices[i];
        }else if(min > prices[i]){
            min = prices[i];
        }
    }
    return ret;
    
}