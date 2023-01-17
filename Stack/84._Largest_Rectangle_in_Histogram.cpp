class Solution
{
private:
    vector<int> prevSmallerElementIndex(vector<int> &heights, int size)
    {
        stack<int> st;
        vector<int> ans(size);
        st.push(-1);

        for (int i = 0; i < size; i++)
        {
            int curr = heights[i];
            while (st.top() != -1 && heights[st.top()] >= curr)
            {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }

        return ans;
    }

    vector<int> nextSmallerElementIndex(vector<int> &heights, int size)
    {
        stack<int> st;
        vector<int> ans(size);
        st.push(-1);

        for (int i = size - 1; i >= 0; i--)
        {
            int curr = heights[i];
            while (st.top() != -1 && heights[st.top()] >= curr)
            {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }

        return ans;
    }

public:
    int largestRectangleArea(vector<int> &heights)
    {
        int size = heights.size();

        vector<int> prev(size);
        prev = prevSmallerElementIndex(heights, size);

        vector<int> next(size);
        next = nextSmallerElementIndex(heights, size);

        int maxArea = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            if (next[i] == -1)
            {
                next[i] = size;
            }
            int length = heights[i];
            int width = next[i] - prev[i] - 1;

            int area = length * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};