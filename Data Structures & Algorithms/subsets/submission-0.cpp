class Solution {
public:
   void findSubsets(vector<int>&nums,vector<int>&ans,vector<vector<int>>&finalAns,int index){
    if(index>=nums.size()){
        finalAns.push_back(ans);
        return ;
    }
    int num=nums[index];
    ans.push_back(num);
    findSubsets(nums,ans,finalAns,index+1);
    ans.pop_back();
    findSubsets(nums,ans,finalAns,index+1);

   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>finalAns;
        int index=0;
        findSubsets(nums,ans,finalAns,index);
        return finalAns;
    }
};
