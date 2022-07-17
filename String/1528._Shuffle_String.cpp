class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        vector<char> str(s.length());
        
        for(int i=0;i<indices.size();i++){
            str[indices[i]]=s[i];
        }
        
        string ans = "";
        for(int k=0;k<str.size();k++){
            ans = ans + str[k];
        }
        return ans;
    }
};