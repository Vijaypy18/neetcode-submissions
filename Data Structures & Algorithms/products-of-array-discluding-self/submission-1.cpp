class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //method 1 using prefix and suffix array both but using extra space


        // int n=nums.size();
        // vector<int>result(n);
        // vector<int>prefix(n);
        // vector<int>postfix(n);
        // prefix[0]=1;
        // postfix[n-1]=1;
        // for(int i=1;i<nums.size();i++)
        // {
        //    prefix[i]=nums[i-1]*prefix[i-1];
        // }

        //  for(int i=n-2;i>=0;i--)
        // {
        //    postfix[i]=nums[i+1]*postfix[i+1];
        // }
        
        //  for(int i=0;i<nums.size();i++)
        // {
        //    result[i]=prefix[i]*postfix[i];
        // }

        // return result;


        //method 2:using prefix and postfix in same nums to avoid extra space
        int n=nums.size();
        vector<int>ans(n);
        int pre=1;
        int post=1;
        for(int i=0;i<n;i++)
        {
            ans[i]=pre;
            pre=pre*nums[i];
        }

        for(int i=n-1;i>=0;i--)
        {
            ans[i]=ans[i]*post;
            post=post*nums[i];
        }
        return ans;

    }
};
