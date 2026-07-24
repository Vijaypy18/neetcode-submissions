class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0;
        
        unordered_set<char>st;
        int maxLength=0;
        for(int e=0;e<n;e++)
        {
            while(st.find(s[e])!=st.end())
            {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[e]);
            maxLength=max(maxLength,e-l+1);

        }
        return maxLength;
    }
};
