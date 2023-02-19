// SECOND APPROACH USING LINEAR SEARCH

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        vector<int> ans;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == target)
                {
                    return true;
                }
            }
        }
        return false;
    }
};

// SECOND APPROACH USING BINARY SEARCH

class Solution
{
private:
    bool solve(vector<vector<int>> &matrix, int target)
    {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int start = 0;
        int end = rows * cols - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            int rowIndex = mid / cols;
            int colIndex = mid % cols;

            if (matrix[rowIndex][colIndex] == target)
            {
                return true;
            }
            else if (matrix[rowIndex][colIndex] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return false;
    }

public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        return solve(matrix, target);
    }
};