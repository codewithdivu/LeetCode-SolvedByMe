class Solution {
public:
    bool hasAlternatingBits(int n) {
        string ans = "";
        
        while(n!=0){
            int bit = n&1;
            ans = ans + to_string(bit);
            n=n>>1;
        }
        
        for(int i=0;i<ans.length();i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
        }
        return true;
    }
};