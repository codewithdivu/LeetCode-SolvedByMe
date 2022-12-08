class Solution {
private:
    void check(TreeNode* root,vector<int>&arr){
        if(root==NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            arr.push_back(root->val);
        }

        check(root->left,arr);
        check(root->right,arr);

        return ;
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>first;
        vector<int>second;
        check(root1,first);
        check(root2,second);

        if(first.size() != second.size()){
            return false;
        }
        for(int i=0;i<first.size();i++){
            if(first[i]!=second[i]){
                return false;
            }
        }
        return true;
    }
};