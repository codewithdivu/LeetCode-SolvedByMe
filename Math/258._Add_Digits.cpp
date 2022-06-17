
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        if(num<10){
            return num;
        }
        while(num>0)
        {
            int lastdigit = num%10;
            sum = sum + lastdigit;
            num = num/10;
        }
        num=sum;
        // addDigits(num);
        return addDigits(num);
    }
};