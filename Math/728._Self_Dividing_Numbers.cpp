class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for(int i=left;i<=right;i++){
            
            int n = i;
            bool check = true;
            
            while(n!=0){
                int digit = n%10;
                // if(i%digit==0){
                //     check = true;
                // }
                if(digit == 0 || i%digit!=0 ){
                    check=false;
                    break;
                }
                n=n/10;
            }
            if(check){
                ans.push_back(i);
            }
            
        }
        return ans;
    }
};