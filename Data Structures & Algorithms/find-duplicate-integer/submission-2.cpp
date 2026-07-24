class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //method 1:we are  map not an inplace
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
       

       //method 2:using set we are not doing inplace
        // set<int>st;
        // for(auto it:nums)
        // {
        //     if(st.find(it)!=st.end())
        //     {
        //         return it;
        //     }
        //     st.insert(it);
        // }
        // return -1;




        //method 3:inplace making using of index
        for (int i = 0; i < nums.size(); i++) {
    while (nums[i] != i + 1) {
        if (nums[nums[i] - 1] == nums[i]) {
            return nums[i];
        }
        swap(nums[i], nums[nums[i] - 1]);
    }
}
return -1;

    }
};
