class Solution {
public:
    bool validPalindrome(string s) {
        if(isPalindrome(s)){
            return true;
        }
        for(int i=0;i<s.size();i++)
        {
            string str = s.substr(0,i)+s.substr(i+1);
            if(isPalindrome(str))
            {
                return true;
            }
            
        }
        return false;
    }
    private:
           bool isPalindrome(string s)
           {
               int i=0;
               int j=s.size()-1;
               while(i<j)
               {
                 if(s[i]!=s[j])
                 {
                    return false;
                    
                 }
                 i++;
                 j--;
               }
               return true;
           }
};