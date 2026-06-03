class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,smallest=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<smallest){
                smallest=prices[i];
            }
            else{
                profit=max(profit,prices[i]-smallest);
            }
        }
        return profit;
    }
};