class Solution
{
private:
    void inOrder(TreeNode *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        inOrder(root->left, ans);
        ans.push_back(root->val);
        inOrder(root->right, ans);
    }

public:
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        vector<int> ans;
        inOrder(root1, ans);
        inOrder(root2, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};