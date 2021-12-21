class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int currentBuy = 0;
        int currentBuyIndex = -1;
        
        int profit = 0;
        for(int i = 0; i < size; i++){
            //sell check
            if(currentBuyIndex != -1){
                if(currentBuy < prices[i]){
                    currentBuyIndex = -1;
                    profit += (prices[i] - currentBuy); 
                }
            }
            //buy check
            for(int j = i+1; j < size; j++){
                if(prices[i] < prices[j]){
                    currentBuyIndex = i;
                    currentBuy = prices[i];
                    break;
                }
            }
        }
        return profit;
        
    }
};