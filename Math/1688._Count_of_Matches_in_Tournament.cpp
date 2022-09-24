class Solution {
public:
    
    int countMatches(int n,int &count){
        
        if(n==1){
            return count;
        }
        
        if(n%2==0){
            count = count + n/2;
            n = n/2;
            countMatches(n,count);
        }
        else{
            count = count + (n-1)/2;
            n = ((n-1)/2)+1;
            countMatches(n,count);
        }
        return count;
    }
    
    int numberOfMatches(int n) {
        int count = 0;
        return countMatches(n,count);
    }
};