class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        
        int occurence = 0;
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                occurence = i;
                break;
            }
        }
        
        if(occurence == 0){
            return word;
        }
        else{
            
            int start = 0;
            int end = occurence;
            
            while(start<end){
                swap(word[start],word[end]);
                start++;
                end--;
            }
            return word;
        }
    }
};