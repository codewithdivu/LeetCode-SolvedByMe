class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;
        if(n==0){return 1;}
        while(m!=0){
            mask = (mask<<1)|1;
            m = m>>1;
        }
        int ans = (~n)&mask;
        return ans;
    }
};



// ----------------ANOTHER SOLUTION BY ME -----------------------

class Solution {
public:
    int bitwiseComplement(int n) {
    int ans = 0;
        int i=0;
        if(n==0){
            return 1;
        }
       while(n!=0){
           
           int bit = n&1;
           
           if(bit==0){
               ans = (1*pow(2,i)) + ans;
           }
           i=i+1;
           n=n>>1;
           
       }
        return ans;
    }
};