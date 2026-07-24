class Solution {
public:
//bhai next greater elementn ka index bol raha hai
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //brute force apporach
        int n=temperatures.size();
        vector<int>ans(n,0);
        int count=1;
        for(int i=0;i<temperatures.size();i++)
        {
            for(int j=i+1;j<temperatures.size();j++)
            {
                 if(temperatures[j]<=temperatures[i])
                 {
                    count++;
                   
                 }
                 else{
                    ans[i]=count;
                    break;
                 }
                //  if(j==n-1 )

                 

            }
            count=1;

            
        }
        return ans;
    }
};
