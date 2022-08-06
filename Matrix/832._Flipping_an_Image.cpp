class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        
        for(int i=0;i<image.size();i++){
            int start = 0;
            int end = image[i].size()-1;
            while(start<=end){
                swap(image[i][start],image[i][end]);
                start++;
                end--;
            }
        }
                
        for(int m=0;m<image.size();m++){
            for(int n=0;n<image[m].size();n++){
                if(image[m][n]==0){
                    image[m][n]=1;
                }
                else{
                    image[m][n]=0;
                }
            }
        }
        return image;
    }
};


/// second way ans it is faster than above

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        
        for(int i=0;i<image.size();i++){
            int start = 0;
            int end = image[i].size()-1;
            while(start<=end){
                swap(image[i][start],image[i][end]);
                if(image[i][start]==0){
                    image[i][start]=1;
                }
                else{
                    image[i][start]=0;
                }
                if(start!=end){
                if(image[i][end]==0){
                    image[i][end]=1;
                }
                else{
                    image[i][end]=0;
                }
                }
                start++;
                end--;
            }
        }
                
        // for(int m=0;m<image.size();m++){
        //     for(int n=0;n<image[m].size();n++){
        //         if(image[m][n]==0){
        //             image[m][n]=1;
        //         }
        //         else{
        //             image[m][n]=0;
        //         }
        //     }
        // }
        return image;
    }
};