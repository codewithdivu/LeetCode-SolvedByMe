class Solution
{
private:
    bool isEqual = false;
    void isHas(TreeNode *root, int sum)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            if (sum == root->val)
            {
                isEqual = true;
            }
        }
        isHas(root->left, sum - root->val);
        isHas(root->right, sum - root->val);
    }

public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        isHas(root, targetSum);
        return isEqual;
    }
};