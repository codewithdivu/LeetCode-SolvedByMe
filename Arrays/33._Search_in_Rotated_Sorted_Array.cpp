
// there is in leetcode we asked to solve this quesiton in o(log n) complexity

//.......time-complexity ---->  o(n);

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};




//.......time-complexity ---->  o(log n);

class Solution
{
private:
    int getPivot(vector<int> arr)
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

    int binarySearching(vector<int> arr, int start, int end, int target)
    {
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
            mid = start + (end - start) / 2;

            if (arr[mid] == target)
            {
                return mid;
            }
            else if (arr[mid] > target)
            {
                end = mid - 1;
            }
            else if (arr[mid] < target)
            {
                start = mid + 1;
            }
        }
        return -1;
    }

public:
    int search(vector<int> &nums, int target)
    {
        int pivot = getPivot(nums);

        if (target >= nums[pivot] && target <= nums[nums.size() - 1])
        {
            return binarySearching(nums, pivot, nums.size() - 1, target);
        }
        else
        {
            return binarySearching(nums, 0, pivot - 1, target);
        }
    }
};