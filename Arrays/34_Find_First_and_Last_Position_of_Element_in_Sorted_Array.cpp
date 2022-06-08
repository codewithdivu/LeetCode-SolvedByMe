class Solution {
public:
        int firstOcc(vector<int> arr, int target){
            int n = arr.size();
            int start = 0;
            int end = n-1;
            
            int mid = start + (end-start)/2;
            int ans = -1;
            while(start<=end){
                if(arr[mid]==target){
                    ans=mid;
                    end = mid -1;
                }
                else if(arr[mid]>target){
                    end = mid-1;
                }
                else if(arr[mid]<target){
                    start = mid+1;
                }
                mid = start+(end-start)/2;
            }
            return ans;
            
        }
    int secondOcc(vector<int> arr, int target){
            int n = arr.size();
            int start = 0;
            int end = n-1;
            
            int mid = start + (end-start)/2;
            int ans=-1;
            while(start<=end){
                if(arr[mid]==target){
                    ans=mid;
                    start = mid +1;
                }
                else if(arr[mid]>target){
                    end = mid-1;
                }
                else if(arr[mid]<target){
                    start = mid+1;
                }
                mid = start+(end-start)/2;
            }
            return ans;
            
        }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> vv = {-1,-1};
        if(nums.size()==0){
            return vv;
        }
        
        vector<int> ans;
        int first = firstOcc(nums,target);
        int second = secondOcc(nums,target);
        cout<<first<<" "<<second<<endl;
        ans.push_back(first);
        ans.push_back(second);
        return ans;
    }
};