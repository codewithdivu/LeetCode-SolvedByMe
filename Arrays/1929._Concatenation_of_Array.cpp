class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size();
        int le = len;
        for(int i=0;i<le;i++){
            nums.push_back(nums[i]);
        }
     return nums;   
    }
};