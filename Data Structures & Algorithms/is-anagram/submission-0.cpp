class Solution {
public:
    bool isAnagram(string s, string t) {
     //method m1: using sort function


     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     if(s==t){
        return true;
     }   
     return false;
    }
};
