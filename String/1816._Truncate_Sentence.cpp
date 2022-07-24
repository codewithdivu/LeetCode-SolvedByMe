class Solution {
public:
    string truncateSentence(string s, int k) {
        int word = k;
        int count = 0;
        string ans = "";
        for(int i=0;i<s.length();i++){
            
            if(count == word){
                break;
            }
            else if(s[i+1]==' '){
                ans = ans + s[i];
                count++;
            }
            
            else{
                ans = ans + s[i];
            }
        }
        return ans;
    }
};