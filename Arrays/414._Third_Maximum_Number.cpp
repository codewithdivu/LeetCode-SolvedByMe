class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        if(nums.size()==1){
            return nums[0];
        }
        
        sort(nums.begin(),nums.end());
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        if(s.size()<3){
            set<int>::iterator bt;
            bt = s.begin();
            int maxu = INT_MIN;
            for(auto bt=s.begin();bt!=s.end();bt++){
                maxu = max(maxu,*bt);
            }
            return maxu;
        }
        set<int>::iterator it;
        it=s.begin();
        advance(it,s.size()-3);
        return *it;
    }
};