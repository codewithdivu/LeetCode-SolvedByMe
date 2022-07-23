class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int len = candies.size();
        int maxx = INT_MIN;
        for(int i=0;i<candies.size();i++){
            maxx = max(candies[i],maxx);
        }
        
        for(int j=0;j<candies.size();j++){
            int sum = candies[j]+extraCandies;
            if(sum>=maxx){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};