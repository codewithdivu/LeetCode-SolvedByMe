static int MOD = 1e9+7;
class Solution {
private:
    long long totalTreeSum=0;
    long long answer = 0;

    void findTotalSum(TreeNode* root){
        if(root==NULL){
            return;
        }
        totalTreeSum += root->val;
        findTotalSum(root->left);
        findTotalSum(root->right);
    }

    int findSumForNode(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int sumOfLeftSubTree = findSumForNode(root->left);
        int sumOfRightSubTree = findSumForNode(root->right);

        answer=max({answer,(totalTreeSum-sumOfLeftSubTree)*sumOfLeftSubTree,(totalTreeSum-sumOfRightSubTree)*sumOfRightSubTree});
        return sumOfLeftSubTree+sumOfRightSubTree+root->val;
    }

public:
    int maxProduct(TreeNode* root) {
        findTotalSum(root);
        findSumForNode(root);
        return answer%MOD;
    }
};