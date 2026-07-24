class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // 1-> method
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]==nums[j])
        //         {
        //             return true;
        //         }
        //     }
        // }
        // return false;



        // 2->method
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
            if(it.second>1)
            {
                return true;
            }
        }
        return false;


        //3->method
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i])!=st.end())
            {
                return true;
            }
            st.insert(nums[i]);
        }
        return false;
    }
};