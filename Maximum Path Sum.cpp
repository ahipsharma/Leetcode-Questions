class Solution {
private:
    int maxPath(TreeNode* root, int &maxi){
        if(root == NULL)
            return 0;
        int l = max(0, maxPath(root->left, maxi));// This is done so that if a -ve number comes so it won't be accepted and we take 0 instead
        int r = max(0, maxPath(root->right, maxi));// Similarly here
        
        maxi = max(maxi, (root->val+l+r));
        return root->val + max(l,r);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPath(root,maxi);
        return maxi;
    }
};