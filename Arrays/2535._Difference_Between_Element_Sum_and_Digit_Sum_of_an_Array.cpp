class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int elementSum = 0;
        int digitSum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            elementSum += nums[i];
            int n = nums[i];
            while (n != 0)
            {
                int digit = n % 10;
                digitSum += digit;
                n = n / 10;
            }
        }
        return abs(elementSum - digitSum);
    }
};