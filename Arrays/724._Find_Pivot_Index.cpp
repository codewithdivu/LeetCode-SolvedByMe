class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        
        int left=0;
        for(int j=0;j<nums.size();j++){
            left = left + nums[j];
            if (left == sum){
                return j;     
            }
            sum = sum - nums[j];
        }
        return -1;
    }
};