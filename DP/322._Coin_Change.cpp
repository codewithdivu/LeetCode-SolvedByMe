class Solution {
private:
    int dfs(int i, int t, vector<int> &coins, vector<vector<int>> &dp) {
        if(!i) {
            if(t % coins[0] == 0) return t / coins[0];
            return 1e9;
        }
        if(dp[i][t] != -1) return dp[i][t];

        int notPick = 0 + dfs(i - 1, t, coins, dp);
        int pick = coins[i] <= t ? 1 + dfs(i, t - coins[i], coins, dp) : 1e9;

        return dp[i][t] = min(pick, notPick);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));

        int ans = dfs(n - 1, amount, coins, dp);
        return ans == 1e9 ? -1 : ans;
    }
};