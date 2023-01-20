/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution
{
private:
    void traverseClone(TreeNode *root, int value, TreeNode *&ans)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->val == value)
        {
            ans = root;
            return;
        }
        traverseClone(root->left, value, ans);
        traverseClone(root->right, value, ans);
    }

public:
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {
        TreeNode *ans = NULL;
        traverseClone(cloned, target->val, ans);
        return ans;
    }
};