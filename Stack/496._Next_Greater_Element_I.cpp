class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;

        int index = 0;

        for (int i = 0; i < nums1.size(); i++)
        {
            bool check = false;
            bool duck = false;
            for (int j = 0; j < nums2.size(); j++)
            {

                if (nums1[i] == nums2[j])
                {
                    duck = true;
                }

                if (nums2[j] > nums1[i] && duck)
                {
                    ans.push_back(nums2[j]);
                    // index = j+1;
                    check = true;
                    break;
                }
            }
            if (check == false)
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};

// optimal solution of this problem is solved by stack and we will do it later
