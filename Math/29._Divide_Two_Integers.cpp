class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend==pow(-2,31) && divisor==-1){
            return (pow(2,31)-1);
        }
        
                int result = dividend/divisor;

        if(result>pow(2,31)-1){
            return (pow(2,31)-1);
        }
        else 
        {
        if(result<pow(-2,31)){
            return pow(-2,31);
        }
        else {
            return trunc(result);
        }
        }
    }
};