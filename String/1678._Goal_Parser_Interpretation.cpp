class Solution {
public:
    string interpret(string command) {
        string ans = "";
        
        for(int i=0;i<command.length();i++){
            if((command[i]>='a' && command[i]<='z') || (command[i]>='A' && command[i]<='Z')){
                ans = ans + command[i];
            }
            if(command[i]=='(' && command[i+1]==')'){
                ans = ans + 'o';
            }
        }
     return ans;   
    }
};