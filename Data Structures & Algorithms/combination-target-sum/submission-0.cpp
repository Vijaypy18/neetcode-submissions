class Solution {
public:
  
    void subSetSum(vector<int>& nums, vector<vector<int>>& ans, vector<int>& sum, int index, int target) {
        if (target == 0) {
            ans.push_back(sum);
            return;
        }
        if (index >= nums.size() || target < 0) {
            return;
        }

        // Include the current number
        sum.push_back(nums[index]);
        subSetSum(nums, ans, sum, index, target - nums[index]);  // we can reuse the same index
        sum.pop_back();

        // Exclude the current number and move forward
        subSetSum(nums, ans, sum, index + 1, target);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> sum;
        subSetSum(nums, ans, sum, 0, target);
        return ans;
    }
};

