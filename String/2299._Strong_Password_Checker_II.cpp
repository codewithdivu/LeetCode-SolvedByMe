class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int len = password.length();
        int lower = 0;
        int upper = 0;
        int digit = 0;
        int special = 0;
        
        if(len>=8){
        for(int i=0;i<len;i++){
            
            if(password[i]==password[i+1]){
                return false;
            }
            
            if(password[i]>='0' && password[i]<='9'){
                digit+=1;
            }
            else if(password[i]>='a' && password[i]<='z'){
                lower+=1;
            }
            else if(password[i]>='A' && password[i]<='Z'){
                upper+=1;
            }
            else{
                special++;
            }
        }
    }
        
        if(lower && upper && digit && special){
            return true;
        }
        return false;
        
    }
};