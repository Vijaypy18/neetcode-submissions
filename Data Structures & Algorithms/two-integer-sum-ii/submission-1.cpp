class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        
        while (i < j) {
            int currSum = numbers[i] + numbers[j];
            if (currSum == target) {
                return {i + 1, j + 1}; // 1-based index
            } else if (currSum < target) {
                i++; // move left pointer rightward
            } else {
                j--; // move right pointer leftward
            }
        }
        return {};
    }
};
