class Solution {
public:
    bool isAnagram(string s, string t) {
        // method -> 1
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t)
        // {
        //     return true;
        // }
        // return false;



        //method 2:-
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(auto it:s)
        {
            mp1[it]++;
        }
        for(auto it:t)
        {
            mp2[it]++;
        }
        
        return mp1==mp2;
    }
};
