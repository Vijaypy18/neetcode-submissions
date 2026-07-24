class Solution {
public:
    vector<vector<int>>result;
    void twoSum(vector<int>& nums,int i,vector<vector<int>>&result){
         int s=i+1;
         int e=nums.size()-1;
         while(s<e)
         {
            int sum=nums[i]+nums[s]+nums[e];
            if(sum<0)
            {
                s++;
            }
            else if(sum>0)
            {
                e--;
            }
            else{
                result.push_back({nums[i],nums[s],nums[e]});
                s++;
                e--;
                 while (s < e&& nums[s] == nums[s- 1]) {
                    ++s;
            }
            
         }
    }
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()&&nums[i]<=0;i++)
        {
            if(i==0 || nums[i]!=nums[i-1])
            {
                twoSum(nums,i,result);
            }
        }
        return result;
    }
};
