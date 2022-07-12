class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector<int> nums;
        
        int sum = start;
        for(int i=0;i<n;i++){
            nums.push_back(sum);
            sum = sum + 2;
        }
        
        int ans;
        for(int j=0;j<nums.size();j++){
            ans = ans^nums[j];
        }
        return ans;
    }
};