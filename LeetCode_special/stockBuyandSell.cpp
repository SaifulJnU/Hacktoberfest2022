class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini= prices[0];
        int profit=0;
        for(int i=0 ;i<prices.size();i++){
            if(prices[i]<mini){
                mini=prices[i];
            }else{
                int prof=prices[i]-mini;
                profit=max(prof, profit);
            }
        }
        
        return profit;
    }
};
