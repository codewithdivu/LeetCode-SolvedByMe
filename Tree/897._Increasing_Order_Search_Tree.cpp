class Solution
{
private:
    void traversal(TreeNode *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        traversal(root->left, ans);
        ans.push_back(root->val);
        traversal(root->right, ans);
    }

public:
    TreeNode *increasingBST(TreeNode *root)
    {
        vector<int> ans;
        traversal(root, ans);

        TreeNode *newRoot = new TreeNode(0);
        TreeNode *anss = newRoot;

        for (auto a : ans)
        {
            TreeNode *dummy = new TreeNode(a);
            newRoot->right = dummy;
            newRoot = dummy;
        }

        return anss->right;
    }
};