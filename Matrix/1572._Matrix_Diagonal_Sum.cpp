class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size();
        
        int diagonal = 0;
        int sum = 0;
        int j = size-1;
        for(int i=0;i<size;i++){
            if(size%2!=0){
            if(i==j){
                diagonal = mat[i][j];
            }
            }
            sum = sum + mat[i][i];
            sum = sum + mat[i][j];
            j--;
        }
        return sum-diagonal;
    }
};