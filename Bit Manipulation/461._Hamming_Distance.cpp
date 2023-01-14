class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int count = 0;

        for (int i = 0; i <= 31; i++)
        {
            int firstDigit = x & 1;
            int secondDigit = y & 1;
            if (firstDigit != secondDigit)
            {
                count++;
            }
            x = x >> 1;
            y = y >> 1;
        }
        return count;
    }
};