class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // for(auto it:nums)
        // {
        //     mp[it]++;
        // }
        // for(auto it:mp)
        // {
        //     if(it.second>1)
        //     {
        //         return it.first;
        //     }
        // }
        // return-1;

        set<int>st;
        for(auto it:nums)
        {
            if(st.find(it)!=st.end())
            {
                return it;
            }
            st.insert(it);
        }
        return -1;
    }
};
