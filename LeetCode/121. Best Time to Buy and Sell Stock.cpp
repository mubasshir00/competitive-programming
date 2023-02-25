class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxProfit = 0;
    int minStockVal =INT_MAX;
    for(int i=0;i<prices.size();i++){
        minStockVal = min(minStockVal,prices[i]);
        if(prices[i]>minStockVal){
            maxProfit = max(maxProfit,prices[i]-minStockVal);
        }
    }
    return maxProfit;
    }
};
