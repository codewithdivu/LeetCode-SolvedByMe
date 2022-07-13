class Solution {
public:
    
    int countOne(int num){
        int count = 0;
        
        while(num!=0){
            int bit = num&1;
            if(bit){
                count++;
            }
            num = num>>1;
        }
        return count;
    }
    
    vector<int> countBits(int n) {
        
        vector<int> ans;
        
        for(int i=0;i<=n;i++){
            ans.push_back(countOne(i));
        }
        return ans;
    }
};