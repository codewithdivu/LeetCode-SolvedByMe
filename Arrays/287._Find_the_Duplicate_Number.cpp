
// o(nlogn)
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return nums[i];
            }
        }
        return 0;
    }
};

// o(n) with modifying array

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int ans = -1;

        for (int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]);
            if (nums[index] < 0)
            {
                ans = index;
                break;
            }
            else
            {
                nums[index] *= -1;
            }
        }
        return ans;
    }
};

// o(n) best solution

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        while (nums[0] != nums[nums[0]])
        {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};
