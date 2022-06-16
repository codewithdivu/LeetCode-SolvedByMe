    class Solution {
    public:
        int sumOfUnique(vector<int>& nums) {
            int sum=0;
            bool ans = false;
            for(int i=0;i<nums.size();i++){
                ans=false;
                for(int j=0;j<nums.size();j++){
                    if(nums[i]==nums[j] && i!=j){
                        ans=true;
                    }
                }
                if(!ans){
                    sum=sum+nums[i];
                }
            }
            return sum;
        }
    };