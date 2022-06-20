class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int ll = (nums[i]-1)*(nums[j]-1);
                mx = max(mx,ll);
            }
        }
        return mx;
    }
};