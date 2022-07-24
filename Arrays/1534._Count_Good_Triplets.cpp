class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                for(int k=j+1;k<arr.size();k++){
                    int x = abs(arr[i]-arr[j]);
                    int y = abs(arr[j]-arr[k]);
                    int z = abs(arr[i]-arr[k]);
                    
                    
                    if(x<=a && y<=b && z<=c){
                        count++;
                    }
                    
                }
            }
        }
        return count;
    }
};