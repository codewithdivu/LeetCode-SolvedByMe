class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int mid = arr[(arr.size()-1)/2];

        vector<pair<int,int>>mp;

        for(auto it : arr)
        {   int temp = abs(it-mid);
            mp.push_back(make_pair(temp,it));
        }
        
        sort(mp.begin(),mp.end(),greater<pair<int,int>>());
        
        vector<int>ans;

        for(int i=0;i<k;++i)
        {
            ans.push_back(mp[i].second);
        }
        return ans;
    }
};