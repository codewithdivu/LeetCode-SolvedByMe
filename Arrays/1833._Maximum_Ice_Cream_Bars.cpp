class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        sort(costs.begin(),costs.end());
        int ans=0;
        for(auto a: costs)
        {
            if(coins<a) break;
            coins-=a;
            ans++;
        }
        return ans;
    }
};