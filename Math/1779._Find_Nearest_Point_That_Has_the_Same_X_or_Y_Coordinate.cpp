class Solution
{
public:
    int nearestValidPoint(int x, int y, vector<vector<int>> &points)
    {

        vector<pair<int, int>> vect;

        for (int i = 0; i < points.size(); i++)
        {

            if (points[i][0] == x || points[i][1] == y)
            { // here this if condition is important so be focus in this condition

                int x1 = points[i][0];
                int y1 = points[i][1];

                int ans = abs(x - x1) + abs(y - y1);

                vect.push_back(make_pair(ans, i));
            }
        }

        if (vect.size() == 0)
        {
            return -1;
        }

        sort(vect.begin(), vect.end());

        return vect[0].second;
    }
};