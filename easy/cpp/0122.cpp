class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int ret = 0;
        for(int i = 1 ; i < prices.size(); i++){
            if(prices[i] - min > 0){
                ret += prices[i] - min;
                min = prices[i];
            } 
            if(prices[i] < min) min = prices[i];
        }
        return ret;
    }
};