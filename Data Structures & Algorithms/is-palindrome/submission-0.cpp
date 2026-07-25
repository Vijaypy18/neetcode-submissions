class Solution {
public:
    bool isPalindrome(string s) {
        string t=s;
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(isalnum(s[i]) && isalnum(s[j]))
            {
                if(s[i]==s[j] || tolower(s[i])==s[j] || tolower(s[j])==s[i])
                {
                    i++;
                    j--;
                }
                else{
                    return false;
                }
            }
            else if(!isalnum(s[i]))
            {
                i++;
            }
            else if(!isalnum(s[j]))
            {
                j--;
            }
        }
        return true;
    }
};
