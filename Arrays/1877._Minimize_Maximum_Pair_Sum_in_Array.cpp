class Solution
{
private:
    int pairs(vector<int> &nums)
    {
        int start = 0;
        int end = nums.size() - 1;

        int maxu = INT_MIN;

        while (start < end)
        {
            maxu = max(maxu, nums[start] + nums[end]);
            start++;
            end--;
        }
        return maxu;
    }

public:
    int minPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return pairs(nums);
    }
};