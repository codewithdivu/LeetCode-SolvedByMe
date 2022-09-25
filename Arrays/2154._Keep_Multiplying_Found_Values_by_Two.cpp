class Solution
{
private:
    bool check(vector<int> &nums, int element)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == element)
            {
                return true;
            }
        }
        return false;
    }
    int multiplied(vector<int> &nums, int &original)
    {
        if (check(nums, original) == false)
        {
            return original;
        }
        original = original * 2;
        multiplied(nums, original);
        return original;
    }

public:
    int findFinalValue(vector<int> &nums, int original)
    {
        return multiplied(nums, original);
    }
};