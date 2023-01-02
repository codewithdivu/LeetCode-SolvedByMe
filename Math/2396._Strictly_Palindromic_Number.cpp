class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int ans = 0;
        while(n>0){
            int digit = n%10;
            ans = ans + (digit*10);
            n=n/10;  
        }
        if(ans == n){
            return true;
        }
        return false;
    }
};