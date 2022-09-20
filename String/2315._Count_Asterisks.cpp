class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        int ans = 0;
        
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='|'){
                count++;
            }
            
            if(count%2==0){
                if(s[i]=='*'){
                    ans++;
                }
            }
            
        }
        return ans;
    }
};