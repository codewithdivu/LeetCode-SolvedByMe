class Solution
{
public:
    int findMinFibonacciNumbers(int k)
    {
        vector<int> fibo;

        int t1 = 0;
        int t2 = 1;
        fibo.push_back(t1);
        fibo.push_back(t2);
        int nextterm = 0;
        while (nextterm < k)
        {
            nextterm = t1 + t2;
            fibo.push_back(nextterm);
            t1 = t2;
            t2 = nextterm;
        }

        int ans = 0;
        int count = 0;
        for (int i = fibo.size() - 1; i >= 0; i--)
        {
            cout << fibo[i] << " ";
            if (ans + fibo[i] <= k)
            {
                ans = ans + fibo[i];
                count++;
            }
            if (ans == k)
            {
                return count;
            }
        }
        return -1;
    }
};