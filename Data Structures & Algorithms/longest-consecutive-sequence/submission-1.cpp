class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Method 1 Using sort function


        // if (nums.empty()) return 0;

        // sort(nums.begin(), nums.end());
        // int count = 1;
        // int maxCount = 1;

        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] == nums[i - 1]) {
        //         continue; // skip duplicates
        //     } else if (nums[i] == nums[i - 1] + 1) {
        //         count++; // consecutive element
        //     } else {
        //         maxCount = max(maxCount, count);
        //         count = 1; // reset count
        //     }
        // }

        // maxCount = max(maxCount, count); // check last sequence
        // return maxCount;


        //Method 2 usign hash set
    
    if (nums.empty()) return 0;

    unordered_set<int> numSet(nums.begin(), nums.end());
    int longestSub = 0;

    for (int num : numSet) {
        // Only start counting if it's the beginning of a sequence
        if (numSet.find(num - 1) != numSet.end()) {
            continue;
        }

        int currentNum = num;
        int currentSub = 1;

        while (numSet.find(currentNum + 1) != numSet.end()) {
            currentNum++;
            currentSub++;
        }

        longestSub = max(longestSub, currentSub);
    }

    return longestSub;
}

    
};
