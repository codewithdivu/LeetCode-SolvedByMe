class Solution
{
private:
    bool isPossibleSolution(vector<int> &weights, int days, int solution)
    {

        int dayCount = 1;
        int weightCount = 0;

        for (int i = 0; i < weights.size(); i++)
        {

            if (weights[i] > solution)
            {
                return false;
            }

            if (weightCount + weights[i] > solution)
            {
                dayCount++;
                weightCount = weights[i];
                if (dayCount > days)
                {
                    return false;
                }
            }

            else
            {
                weightCount += weights[i];
            }
        }
        return true;
    }

public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int start = 0;
        int end = accumulate(weights.begin(), weights.end(), 0);

        int answer = -1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (isPossibleSolution(weights, days, mid))
            {
                answer = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return answer;
    }
};