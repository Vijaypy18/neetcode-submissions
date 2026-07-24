class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty())
        {
            return string(1,char(257));
        }
        string encode;
        string seperator = string(1,char(257));
        for(auto str:strs)
        {
            encode+=str+seperator;
        }
        encode.pop_back();
        return encode;
    }

    vector<string> decode(string s) {
        if(s==string(1,char(257))) 
        return {};

        vector<string>result;
        string seprator=string(1,char(257));
        size_t pos=0;
        size_t found;

        while((found=s.find(seprator,pos))!=string::npos){
            result.push_back(s.substr(pos, found - pos));
            pos = found + 1;

        }
        result.push_back(s.substr(pos));
        return result;



    }
};
