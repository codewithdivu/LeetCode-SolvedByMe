class Solution {
public:
    int countElements(vector<int>& nums) {
        
        int maxu = *max_element(nums.begin(), nums.end()); 
        int minu = *min_element(nums.begin(), nums.end()); 
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > minu && nums[i] < maxu){
                count++;
            }
        }
        
        return count;
    }
};