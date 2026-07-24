class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int maxi_profit=0;
        // for(int i=0;i<prices.size();i++)
        // {
            
        //     for(int j=i+1;j<prices.size();j++)
        //     {
        //         int profit=prices[j]-prices[i];
        //         if(profit>0)
        //         {
        //             maxi_profit=max(profit,maxi_profit);
        //         }
                
        //     }
        // }
        // return maxi_profit;

        int l=0;
        int r=1;
        int max_profit=0;
        while(r<prices.size())
        {
            if(prices[l]<prices[r])
            {
                int profit=prices[r]-prices[l];
                max_profit=max(max_profit,profit);
                r++;
            }
            else{
                l=r;
                r++;
            }
        }
        return max_profit;
    }
};
