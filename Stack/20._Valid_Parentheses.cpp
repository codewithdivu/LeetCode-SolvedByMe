class Solution {
public:
    bool isValid(string s) {
        stack <int> s1;
        int size = s.length();
        
        int ans = true;
        
        for(int i=0;i<size;i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                s1.push(s[i]);
            }
            else if(s[i]=='}' && !s1.empty()){
                if(s1.top()=='{'){
                    s1.pop();
                }
                else{
                    ans = false;
                    break;
                }
            }
            else if(s[i]==']' && !s1.empty()){
                if(s1.top()=='['){
                    s1.pop();
                }
                else{
                    ans = false;
                    break;
                }
            }
            else if(s[i]==')' && !s1.empty()){
                if(s1.top()=='('){
                    s1.pop();
                }
                else{
                    ans = false;
                    break;
                }
            }
            else{
                return false;
            }
        }
        
        if(!s1.empty()){
            return false;
        }
        else{
            return ans;
        }
        
    }
};