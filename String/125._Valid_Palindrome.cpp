#include <iostream>
#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        
        
        int start = 0;
        int end = s.length();
        
        bool first = false;
        bool second = false;
        
        while(start<end){
            
            if((s[start] >= 'A' && s[start]<='Z') || (s[start] >= 'a' && s[start]<='z') || (s[start] >= '0' && s[start]<='9') ){
                first = true;
            }
            else{
                start++;
            }
            if((s[end] >= 'A' && s[end]<='Z') || (s[end] >= 'a' && s[end]<='z') || (s[end] >= '0' && s[end]<='9') ){
                second = true;
            }
            else{
                end--;
            }
            
            if(first && second){
                first = false;
                second = false;
                if(char(tolower(s[start]))!=char(tolower(s[end]))){
                    return false;
                }
                start++;
                end--;
            }
            
        }
        return true;
    }
};