class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<float>st;
        sort(nums.begin(),nums.end());
        int start = 0;
        int end = nums.size()-1;
        
        while(start<end){
            int minu = nums[start++];
            int maxu = nums[end--];
            st.insert((float)(minu+maxu)/2);
        }
        return st.size();
    }
};