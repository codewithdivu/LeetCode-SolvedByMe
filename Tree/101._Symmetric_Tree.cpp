/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{

private:
    bool traversal(TreeNode *root1, TreeNode *root2)
    {

        if (root1 == 0 && root2 == 0)
        {
            return true;
        }
        if (root1 == 0 || root2 == 0 || root1->val != root2->val)
        {
            return false;
        }

        return traversal(root1->left, root2->right) && traversal(root1->right, root2->left);
    }

public:
    bool isSymmetric(TreeNode *root)
    {
        return traversal(root->left, root->right);
    }
};