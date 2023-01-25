class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        map<int, int> mp;

        for (auto item : arr)
        {
            mp[item]++;
        }

        int maxu = -1;

        for (auto it : mp)
        {
            if (it.first == it.second)
            {
                if (maxu < it.first)
                {
                    maxu = it.first;
                }
            }
        }
        return maxu;
    }
};