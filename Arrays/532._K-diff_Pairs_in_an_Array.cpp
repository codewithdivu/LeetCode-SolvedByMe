class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<pair<int,int>,int>mp;
        int count = 0;
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j]) == k){
                    
                    pair<int,int>first = make_pair(nums[i],nums[j]);
                    pair<int,int>second = make_pair(nums[j],nums[i]);
                    
                    if(mp.find(first) == mp.end() && mp.find(second) == mp.end()){
                        count++;
                    }
                    mp[first]++;
                }
            }
        }
        return count;
    }
};
