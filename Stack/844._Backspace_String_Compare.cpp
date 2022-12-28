class Solution
{
private:
    string getString(stack<char> st)
    {
        string ans = "";
        while (!st.empty())
        {
            ans = ans + st.top();
            st.pop();
        }
        return ans;
    }

public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> s1;
        stack<char> s2;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '#')
            {
                s1.push(s[i]);
            }
            else
            {
                if (s[i] == '#' && !s1.empty())
                {
                    s1.pop();
                }
            }
        }
        for (int j = 0; j < t.length(); j++)
        {
            if (t[j] != '#')
            {
                s2.push(t[j]);
            }
            else
            {
                if (t[j] == '#' && !s2.empty())
                {
                    s2.pop();
                }
            }
        }

        string one = getString(s1);
        string two = getString(s2);

        if (one == two)
        {
            return true;
        }
        return false;
    }
};