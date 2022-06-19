class Solution {
public:
    
    int countSpace(string s){
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                count++;
            }
        }    
        return count+1;
    }
    
    int mostWordsFound(vector<string>& sentences) {
        
        int maxx = INT_MIN;
        
        for(int j=0;j<sentences.size();j++){
            
            maxx = max(maxx,countSpace(sentences[j]));
            
        }
        return maxx;
        
        
    }
};