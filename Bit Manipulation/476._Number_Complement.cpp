class Solution {
public:
    int findComplement(int num) {
        
        int ans = 0;
        int i=0;
        while(num!=0){
            int bit = num&1;
            if(bit==0){
                ans = ans + (1*pow(2,i));
            }
            i++;
            num=num>>1;
        }
        return ans;
    }
};