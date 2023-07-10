class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int mini=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size()<mini)
            {
                mini=strs[i].size();
                s=strs[i];
            }
        }
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            bool check=true;
            for(int j=0;j<strs.size();j++)
            {
                if(s[i]!=strs[j][i])
                {
                    check=false;
                    break;
                    
                }
                
                
                
            }
            if(!check) break;
            ans+=s[i];
          
        }
        return ans;
        
    }
};