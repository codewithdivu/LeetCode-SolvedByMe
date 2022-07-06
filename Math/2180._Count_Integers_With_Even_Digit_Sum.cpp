class Solution {
public:
    
    bool sumEven(int num){
        int sum = 0;
        while(num!=0){
            int digit = num%10;
            sum = sum + digit;
            num = num / 10;
        }
        
        if(sum%2==0){
            return true;
        }
        else{
            return false;
        }
    }
    
    
    int countEven(int num) {
        int count = 0;
        for(int i=1;i<=num;i++){
            if(sumEven(i)){
                count++;
            }
        }
        return count;
    }
};