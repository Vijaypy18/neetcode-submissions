class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
   //method-1 using sort technique
   
   unordered_map<string,vector<string>>mp;
   vector<vector<string>>ans;
   for(auto s:strs)
   {
      string toSort=s;
      sort(toSort.begin(),toSort.end());
      mp[toSort].push_back(s);
   }

   for(auto it:mp)
   {
     ans.push_back(it.second);
   }

  return ans;

     

    
     


    }
};
