class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            
            int total_sum=0;
            for(int j=i;j<nums.size();j++)
            {
                 
                 total_sum=total_sum+nums[j];
                if(total_sum==k)
                {
                    count++;
                }
            }
            
        }
        return count;
    }
};