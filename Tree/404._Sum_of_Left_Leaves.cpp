class Solution {
public:
    int sum = 0;
    int sumLeaves(TreeNode* root,bool isLeft){
        if(root==NULL){
            return 0;
        }
        if(isLeft && root->left==NULL && root->right==NULL){
            sum = sum + root->val;
        }
        sumLeaves(root->left,true);
        sumLeaves(root->right,false);
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return sumLeaves(root,false);
    }
};