class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        
        int i = 0;
        int len = nums.size()-1;
        
        while(i<len){
            if(nums[i]==nums[i+1] && nums[i]==nums[i+2]){
                i+=2;
            }
            else{
            return nums[i];
            }
            i++;
        }
        return nums[len];
    }
};