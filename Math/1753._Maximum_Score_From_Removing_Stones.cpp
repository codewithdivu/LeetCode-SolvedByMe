class Solution
{
public:
    int maximumScore(int a, int b, int c)
    {
        int sum = a + b + c;
        int maxu = max(a, max(b, c));
        return min(sum - maxu, sum / 2);
    }
};
