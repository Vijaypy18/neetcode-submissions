class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,s=0,l=nums.size()-1;
        while(i<=l)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[s]);
                s++;
            }
            else if(nums[i]==2)
            {
                swap(nums[i],nums[l]);
                l--;
                i--;
            }
            i++;
        }
        
    }
};