class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int len1 = nums.size()/2;
        vector<int> ans;
        for(int i=0;i<len1;i++){
            
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
            
        }
        return ans;
    }
};