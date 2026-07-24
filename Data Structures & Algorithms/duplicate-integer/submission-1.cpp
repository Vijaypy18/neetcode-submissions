class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     //.   method-1:using hash map 


    //     unordered_map<int,int>mp;
    //     for(int i=0;i<nums.size();i++){
    //         mp[nums[i]]++;
    //     }
    //     for(auto it:mp){
    //         if(mp[it.first]>1){
    //             return true;
    //         }
    //     }
    //     return false;


    //method 2:using set

    set<int>st;
    for(int i=0;i<nums.size();i++)
    {
        if(st.find(nums[i])!=st.end()){
            return true;
        }
        st.insert(nums[i]);

        
    }
    return false;
    }
};
