class Solution
{
public:
    string reverseVowels(string s)
    {

        int start = 0;
        int end = s.length() - 1;
        bool st = false;
        bool en = false;
        while (start < end)
        {
            if (s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u' || s[start] == 'A' || s[start] == 'E' || s[start] == 'I' || s[start] == 'O' || s[start] == 'U')
            {
                st = true;
            }
            if (s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u' || s[end] == 'A' || s[end] == 'E' || s[end] == 'I' || s[end] == 'O' || s[end] == 'U')
            {
                en = true;
            }
            if (st && en)
            {
                swap(s[start], s[end]);
                st = false;
                en = false;
            }
            if (!st)
            {
                start++;
            }
            if (!en)
            {
                end--;
            }
        }

        return s;
    }
};