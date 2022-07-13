class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        int bit = start^goal;
        int count = 0;
        while(bit!=0){
            
            int byte = bit&1;
            
            if(byte){
                count++;
            }
            bit=bit>>1;
            
        }
        return count;
    }
};