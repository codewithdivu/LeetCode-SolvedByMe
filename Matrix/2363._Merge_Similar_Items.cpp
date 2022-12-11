class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans;

        map<int,int>mp;

        for(auto pelo : items1){
            mp[pelo[0]] += pelo[1];
        }

        for(auto bijo : items2){
            mp[bijo[0]] += bijo[1];
        }

        for(auto item : mp){
            ans.push_back({item.first,item.second});
        }
        return ans;
    }
};