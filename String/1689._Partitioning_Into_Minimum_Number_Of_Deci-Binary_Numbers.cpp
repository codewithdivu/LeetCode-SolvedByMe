class Solution {
public:
    int minPartitions(string n) {
       
        int maxu = 0;
        
        for(int i=0;i<n.size();i++){
            int digit = n[i] - '0';
            maxu = max(maxu,digit);
        }
        
        return maxu;
    }
};