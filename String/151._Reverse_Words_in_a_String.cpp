class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> v;
        string ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            string temp;
            while (s[i] != ' ' && i < s.size())
            {
                temp.push_back(s[i]);
                i++;
            }

            v.push_back(temp);
        }

        for (int i = v.size() - 1; i >= 0; i--)
        {
            ans.append(v[i]);
            if (i != 0)
            {
                ans.push_back(' ');
            }
        }
        return ans;
    }
};