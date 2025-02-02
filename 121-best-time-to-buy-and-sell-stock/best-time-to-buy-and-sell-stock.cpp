class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;
        for(int i = 1; i < prices.size(); i++){
            int currentDaysPrice = prices[i];
            if(currentDaysPrice < buyPrice){
                buyPrice = currentDaysPrice;
            }else {
                int currentDaysProfit = currentDaysPrice - buyPrice;
                if( currentDaysProfit > profit){
                    profit = currentDaysProfit;
                }
            }
        }
        return profit;
    }
};