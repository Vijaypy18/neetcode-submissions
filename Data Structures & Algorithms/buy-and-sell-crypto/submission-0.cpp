class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        
        for(int i=0;i<prices.size();i++)
        {
            int buy=prices[i];
            int maxProfit1=0;
            for(int j=i+1;j<prices.size();j++)
            {
               int  profit=prices[j]-buy;
                if(profit<=0)
                {
                   profit=0;
                }
                maxProfit1=max(profit,maxProfit1);
            }
            maxprofit=max(maxProfit1,maxprofit);
            maxProfit1=0;
            
        }
        return maxprofit;
    }
};
