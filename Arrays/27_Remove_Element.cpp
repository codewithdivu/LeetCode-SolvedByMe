class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0){
            return 0;
        }
        
        int k = 0;
        
        for(auto pt = nums.begin();  pt!=nums.end();){
            if(*pt==val){
                pt = nums.erase(pt);
            }
            else{
                k++;
                pt++;
            }
        }
        return k;
    }
};