class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans;
        int i = 2;
        
        while(i){
            if(i%2==0 && i%n==0){
                ans = i;
                break;
            }
            i++;
        }
        return ans;
    }
};