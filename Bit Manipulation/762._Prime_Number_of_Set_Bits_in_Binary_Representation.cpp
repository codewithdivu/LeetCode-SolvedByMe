class Solution {
public:
    
    int countBits(int n){
        int count = 0;
        
        
        while(n!=0){
           int bit = n&1;
            if(bit){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
    
    bool checkPrime(int num){
        
        if(num==1){
            return false;
        }
        
        for(int i=2;i<num;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    
    int countPrimeSetBits(int left, int right) {
        
        int counter = 0;
        
        for(int i=left;i<=right;i++){
            
            int fufu = countBits(i);
            cout<<fufu<<" ";
            if(checkPrime(fufu)){
                counter = counter + 1;
            }
            
        }
        return counter;
    }
};