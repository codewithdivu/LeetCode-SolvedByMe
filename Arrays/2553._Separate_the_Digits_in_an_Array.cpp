class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        string ans = "";
        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans + to_string(nums[i]);
        }
        vector<int> answer;
        for (int i = 0; i < ans.length(); i++)
        {
            answer.push_back(int(ans[i] - '0'));
        }
        return answer;
    }
};