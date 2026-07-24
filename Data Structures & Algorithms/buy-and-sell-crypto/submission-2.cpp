class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi_profit=0;
        for(int i=0;i<prices.size();i++)
        {
            
            for(int j=i+1;j<prices.size();j++)
            {
                int profit=prices[j]-prices[i];
                if(profit>0)
                {
                    maxi_profit=max(profit,maxi_profit);
                }
                
            }
        }
        return maxi_profit;
    }
};
