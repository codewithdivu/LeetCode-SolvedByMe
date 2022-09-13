class Solution
{
public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        sort(tokens.begin(), tokens.end());

        int l = 0, r = tokens.size() - 1;

        int score = 0;
        int maxScore = 0;

        while (l <= r)
        {

            if (tokens[l] <= power)
            {
                score += 1;
                maxScore = max(maxScore, score);
                power -= tokens[l];
                l++;
            }
            else if (score >= 1)
            {
                power += tokens[r];
                r--;
                score -= 1;
            }
            else
            {
                break;
            }
        }
        return maxScore;
    }
};