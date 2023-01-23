class Solution
{
public:
    int countPrefixes(vector<string> &words, string s)
    {
        int count = 0;

        for (auto item : words)
        {

            bool isMatch = true;
            for (int i = 0; i < item.length(); i++)
            {
                if (item[i] != s[i])
                {
                    isMatch = false;
                    break;
                }
            }

            if (isMatch)
            {
                count++;
            }
        }
        return count;
    }
};