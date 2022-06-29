class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        int ch=0;
        int len = s.length();
        
        for(int i=0;i<len;i++){
            if(s[i]==letter){
                ch+=1;
            }
        }
        float ans = (ch*100)/len;
        return ans;
    }
};