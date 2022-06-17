class Solution {
public:
    
    
    bool isPalindrome(string str){
    bool check = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str[str.length() - 1 - i])
        {
            check = 0;
            break;
        }
    }

        return check;
    }
    
    string firstPalindrome(vector<string>& words) {
        
        
        for(int j=0;j<words.size();j++){
            if(isPalindrome(words[j])){
                return words[j];
            }
        }
        return "";
    }
};