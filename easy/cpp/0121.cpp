class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1) return 0;
        int Min = prices[0];
        int ret = 0;
        for(int i = 1 ; i < prices.size(); i++){
            if(prices[i] - Min > ret)ret = prices[i] - Min;
            if(prices[i] < Min) Min = prices[i];
        }
        return ret;
    }
};