class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        if (!root->left)
        {
            return 1 + minDepth(root->right);
        }
        if (!root->right)
        {
            return 1 + minDepth(root->left);
        }
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        int len = min(left, right);
        return len + 1;
    }
};