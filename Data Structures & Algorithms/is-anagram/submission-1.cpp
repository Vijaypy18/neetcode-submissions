class Solution {
public:
    bool isAnagram(string s, string t) {
     //method m1: using sort function


    //  sort(s.begin(),s.end());
    //  sort(t.begin(),t.end());
    //  if(s==t){
    //     return true;
    //  }   
    //  return false;

    //method 2: using hashmap and compare both string

    unordered_map<char,int>mp1;
    unordered_map<char,int>mp2;
    if(s.length()!=t.length()){
        return false;
    }

    for(int i=0;i<s.length();i++){
        mp1[s[i]]++;
        mp2[t[i]]++;

    }
    for(auto it:mp1){
        if(mp1[it.first]!=mp2[it.first]){
            return false;
        }
    }
    return true;
    }
};
