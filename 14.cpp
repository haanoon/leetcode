class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count = 0 , min = 201,len;
        string str;
        for(int i = 0;i < strs.size() ; i++)
        {
            len = strs[i].length();
            if(len<min)
            {
                min = len;
                str = strs[i];
            }
        }
        for(int i=0 ; i<str.length();i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i] != str[i])
                    return str.substr(0,count);
            }
            count++;
        }
        return str.substr(0,count);

    }
};