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




        //method 3:inplace making using of slow and fast pointer
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        

        slow=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
      
       return slow;
    }
};
