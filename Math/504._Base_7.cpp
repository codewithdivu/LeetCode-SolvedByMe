class Solution {
public:
    string convertToBase7(int num) {
        int a=num;
        string ans = "";
        if(num==0){
            return "0";
        }
        while(num!=0){
            int digit  = abs(num) % 7;
            num = abs(num) /7;
            ans = ans + to_string(digit);
        } 
        if(a<0){
            ans = ans + '-';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};