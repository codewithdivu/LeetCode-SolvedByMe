bool comparator(pair<char, int> &a, pair<char, int> &b)
{
    return a.second > b.second;
}
class Solution
{
public:
    string frequencySort(string s)
    {
        map<char, int> mp;

        for (auto a : s)
        {
            mp[a]++;
        }

        vector<pair<char, int>> answer;

        for (auto &pair : mp)
        {
            answer.push_back(pair);
        }

        sort(answer.begin(), answer.end(), comparator);

        string ans;
        for (auto item : answer)
        {
            for (int i = 0; i < item.second; i++)
            {
                ans += item.first;
            }
        }
        return ans;
    }
};