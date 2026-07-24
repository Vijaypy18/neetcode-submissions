class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //method1:TC=o(n^2)
        // int maxprofit=0;//calculating overall max profit 
        
        // for(int i=0;i<prices.size();i++)
        // {
        //     int buy=prices[i];
        //     int maxProfit1=0;//for every item what will be max profit
        //     for(int j=i+1;j<prices.size();j++)
        //     {
        //        int  profit=prices[j]-buy;
        //         if(profit<=0) //if profit <=0 it meams we are in loss profit =0
        //         {
        //            profit=0;
        //         }
        //         maxProfit1=max(profit,maxProfit1);
        //     }
        //     maxprofit=max(maxProfit1,maxprofit);
        //     maxProfit1=0;
            
        // }
        // return maxprofit;


        //method 2:using two pointer
        int maxp=0;
        int l=0;
        int r=1;
        while(r<prices.size())
        {
            if(prices[l]<prices[r])
            {
                int profit=prices[r]-prices[l];
                maxp=max(profit,maxp);
            }
            else{
                l=r;

            }
            r++;
        }
        return maxp;
    }
};
