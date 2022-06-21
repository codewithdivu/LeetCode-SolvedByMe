class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int i = 1;
        
        while(i<46341 && num>=(i*i)){
            int j = num;
            for(int k=1;k<=2;k++){
                if(j%i==0){
                    j = j/i;
                   }
            }
            if(j==1){
                return true;
            
            }
                  i++;
        }
        return false;
    }
};