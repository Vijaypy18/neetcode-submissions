class Solution {
public:
    bool isAnagram(string s, string t) {
        // method 1: using sorting
        // method 2:
        if(s.length() != t.length())
        {
            return false;
        }
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(auto it1:s)
        {
            mp1[it1]++;
        }
        for(auto it2:t)
        {
            mp2[it2]++;
        }

        
        return mp1 == mp2;

        
    }
};
