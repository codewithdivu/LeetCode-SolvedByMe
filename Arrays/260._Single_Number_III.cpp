class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         
        if(nums.size()==2){
            return nums;
        }
        
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int len = nums.size()-1;
        int i=0;
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                ans.push_back(nums[i]);
            }
           
            else{
                i=i+1;
            }
            
        }
        if(ans.size()!=2){
            ans.push_back(nums[nums.size()-1]);
        }
        return ans;
    }
};