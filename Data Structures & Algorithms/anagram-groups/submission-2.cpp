class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       // -->method1
        // unordered_map<string,vector<string>>mp;
        // for(auto it:strs)
        // {
        //     string s = it;
        //     sort(s.begin(),s.end());
        //     mp[s].push_back(it);
        // }
        // vector<vector<string>>result;
        // for(auto it:mp){
        //     result.push_back(it.second);
        // }
        // return result;

        // method --2

        unordered_map<string,vector<string>>mp;
      
        for(auto it:strs)
        {
            vector<int>count(26,0);
            string s=it;
            for(auto c:s)
            {
               count[c-'a']++;
            }
            string key=to_string(count[0]);
            for(int i=1;i<26;++i)
            {
                key += ',' + to_string(count[i]);
            }
            mp[key].push_back(s);
        }
        vector<vector<string>> result;
        for (auto pair : mp) {
            result.push_back(pair.second);
        }
        return result;

    }
};
