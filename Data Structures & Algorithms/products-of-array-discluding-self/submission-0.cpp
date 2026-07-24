class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //method 1 using prefix and postfix array 
        int n=nums.size();
        vector<int>result(n);
        vector<int>prefix(n);
        vector<int>postfix(n);
        prefix[0]=1;
        postfix[n-1]=1;
        for(int i=1;i<nums.size();i++)
        {
           prefix[i]=nums[i-1]*prefix[i-1];
        }

         for(int i=n-2;i>=0;i--)
        {
           postfix[i]=nums[i+1]*postfix[i+1];
        }
        
         for(int i=0;i<nums.size();i++)
        {
           result[i]=prefix[i]*postfix[i];
        }

        return result;

    }
};
