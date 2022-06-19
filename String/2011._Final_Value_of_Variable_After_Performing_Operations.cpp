class Solution {
public:
    
    int countString(string s){
        int lund = 0;
        
        if(s[0]=='-' && s[1]=='-'){
                lund-=1;
        }
        else if(s[0]=='+' && s[1]=='+'){
                lund+=1;
        }
        else if(s[1]=='-' && s[2] == '-'){
            lund-=1;
        }
        else if(s[1]=='+' && s[2]=='+'){
            lund+=1;
        }
        return lund;
    }
    
    
    int finalValueAfterOperations(vector<string>& operations) {
        
        int  ans=0;
        
        for(int i=0;i<operations.size();i++){
            ans = ans + countString(operations[i]);
        }
        return ans;
    }
};