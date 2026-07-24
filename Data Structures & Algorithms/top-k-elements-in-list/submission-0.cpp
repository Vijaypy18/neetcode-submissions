class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>count(n+1);
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            count[it.second].push_back(it.first);
        }
        vector<int>res;
        for(int i=count.size()-1;i>=0;i--)
        {
            for(auto n:count[i])
            {
                res.push_back(n);
                if(res.size()==k)
                {
                    return res;
                }
            }
        }
      return {};
    }
};
