class Solution {
public:
    bool isValid(string s) {
        stack<int>stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                stk.push(s[i]);
            else{
                if(stk.empty())
                    return false;
                else{
                    char ch=stk.top();
                    stk.pop();
                    if(ch=='('&&s[i]==')'||ch=='['&&s[i]==']'||ch=='{'&&s[i]=='}')
                        continue;
                    else return false;
                }
            }
        }
        if(stk.empty())
            return true;
        else return false;
    }
};