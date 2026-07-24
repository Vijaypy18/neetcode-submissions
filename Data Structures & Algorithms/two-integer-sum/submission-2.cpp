class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // -->method 1
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j]== target)
        //         {
        //             return {i,j};
        //         }
        //     }
        // }


        // -->method2
       unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
        int diff = target-nums[i];
         if(mp.count(diff))
         {
            return {mp[diff],i};
         }
         mp.insert({nums[i],i});
       }
        return {};
    }
};
