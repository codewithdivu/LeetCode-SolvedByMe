class Solution {
public:
    string toLowerCase(string s) {
        
        for(int i=0;i<s.length();i++){
            if(isupper(s[i])){
                s[i]=char(tolower(s[i]));
            }
        }
        return s;
    }
};