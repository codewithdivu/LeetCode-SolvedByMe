class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        bool is = false;
        
        for(int i=s.length();i>=0;i--){
            if(s[i]==' ' && !is){
            continue;   
        }
            if(s[i]==' ' && is){
                break;
            }
            if(isalpha(s[i])){
                is = true;
                count++;
            }
        }
        return count;
    }
};