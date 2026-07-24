class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//.   method-1 using sort technique
   
//    unordered_map<string,vector<string>>mp;
//    vector<vector<string>>ans;
//    for(auto s:strs)
//    {
//       string toSort=s;
//       sort(toSort.begin(),toSort.end());
//       mp[toSort].push_back(s);
//    }

//    for(auto it:mp)
//    {
//      ans.push_back(it.second);
//    }

//   return ans;

//.  method:-2 without using sort 
     
     unordered_map<string,vector<string>>mp;
     

    for(auto s:strs)
    {
        vector<int>count(26,0);
        for(auto ch:s)
        {
            count[ch-'a']++;
        }

        string key= to_string(count[0]);

        for(int i=1;i<26;++i)
        {
            key+=','+to_string(count[i]);
        }
        mp[key].push_back(s);
    }

    vector<vector<string>>res;
    for(auto it:mp)
    {
        res.push_back(it.second);
    }
    return res;

    }
}

  



     

    
     

;
