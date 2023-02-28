class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        int size = nums.size();
        int negStartIndex = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int posStartIndex = upper_bound(nums.begin(), nums.end(), 0) - nums.begin();
        return max(negStartIndex, (size - 1 - posStartIndex + 1));
    }
};