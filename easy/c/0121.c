

int maxProfit(int* prices, int pricesSize){
    if(pricesSize <= 1) return 0;
    int min = prices[0];
    int ret = 0;
    for(int i = 0 ; i < pricesSize; i++){
        if(prices[i] - min > ret) ret = prices[i] - min;
        min = min < prices[i] ? min : prices[i];
    }
    return ret;
}