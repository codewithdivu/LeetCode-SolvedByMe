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
class Solution {
private:
    void inorder(TreeNode* root, vector<int> &inOrder){
        if(!root){
            return;
        }
        inorder(root->left, inOrder);
        inOrder.push_back(root->val);
        inorder(root->right, inOrder);
    }
    
    TreeNode* createBST(vector<int> &inOrder, int start, int end){
        if(start > end){
            return NULL;
        }
        
        int mid = (start+end)/2;
        TreeNode* root = new TreeNode(inOrder[mid]);
        root->left = createBST(inOrder, start, mid-1);
        root->right = createBST(inOrder, mid+1, end);
        return root;
    }
    
public:    
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inOrder;
        inorder(root, inOrder);
        return createBST(inOrder, 0, inOrder.size()-1);
    }
};