class Solution {
    private:
    int getPivot(vector<int>arr)
{

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {

        mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    } 
    return start;
}
public:
    int findMin(vector<int>& nums) {
        
        
        
        int pivotIndex = getPivot(nums);
        int pivot = nums[pivotIndex];
        if(nums.size()==1){
            return nums[0];
        }
        else if(pivot>nums[pivotIndex-1]){
            return nums[0];
        }
        else{
            return pivot;
        }
    }
};