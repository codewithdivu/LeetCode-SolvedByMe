class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size()/2;
        set<int>st(nums.begin(),nums.end());
        int ans;
        int count;
        
        for(auto element : st){
            
            count = 0;
            
            for(int i=0;i<nums.size();i++){
                
                if(element==nums[i]){
                    count++;
                }
                
            }
            
            if(count>size){
                ans = element;
                break;
            }
            
        }
        return ans;
        
    }
};