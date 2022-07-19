// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
        
//         int k=0;
//         for(int i=0;i<nums.size();i++,k++){
//             if(nums[i]==target){
//                 return i;
//             }
//             else if(nums[i]>target){
//                 return i;
//             }
//         }
//        return k; 
//     }
// };


// SECOND APPROACH USING BINARY SEARCH WITH COMPLEXITY ==> O(LOG N)

class Solution{
    private:
        int binarySearch(vector<int> arr,int target){
            int start = 0;
            int end = arr.size()-1;
            int mid = start + (end-start)/2;
            int ans;
            
            while(start<=end){
                mid = start + (end-start)/2;
                
                if(arr[mid]==target){
                    return mid;
                }
                else if(arr[mid]>target){
                    ans = mid;
                    end = mid - 1;
                }
                else if(arr[mid]<target){
                    ans = mid+1;
                    start = mid + 1;
                }
            }
            return ans;
        }
    
    public:
        int searchInsert(vector<int>& nums,int target){
            
            int ans = binarySearch(nums,target);
            return ans;
            
        }
};