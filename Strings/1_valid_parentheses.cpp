class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        unordered_map<char,char>mp;
        mp[']']='[';
        mp['}']='{';
        mp[')']='(';
        for(int i=0;i<s.size();i++)
        {
            char b=s[i];
            if(b=='('|| b=='['|| b=='{') stk.push(b);
            else
            {
                if(stk.empty()) return false;
                if(mp[b]!=stk.top()) return false;
                stk.pop();
                
            }
        }
        if(!stk.empty()) return false;
        return true;
        
    }
};