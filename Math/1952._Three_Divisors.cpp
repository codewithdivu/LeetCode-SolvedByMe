
// ITERATIVE WAY

class Solution
{
public:
    bool isThree(int n)
    {
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
            if (count > 3)
            {
                return false;
            }
        }

        if (count < 3)
        {
            return false;
        }
        return true;
    }
};

// RECURSIVE WAY

class Solution
{
private:
    bool threeDivisors(int n, int &count, int index)
    {

        if (count > 3)
        {
            return false;
        }

        if (index <= n)
        {
            if (n % index == 0)
            {
                count++;
            }
        }

        if (index == n)
        {
            if (count == 3)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        return threeDivisors(n, count, index + 1);
    }

public:
    bool isThree(int n)
    {
        int count = 0;
        int index = 1;
        return threeDivisors(n, count, index);
    }
};