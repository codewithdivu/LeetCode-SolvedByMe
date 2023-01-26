class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        
        if(original.size()>(m*n) || original.size()<(m*n)){
            return ans;
        }
        
        int count = 0;
        for(int i=0;i<m;i++){
            vector<int> l;
            for(int j=0;j<n;j++){
                l.push_back(original[count]);
                count++;
            }
            ans.push_back(l);
        }
        return ans;
    }
};