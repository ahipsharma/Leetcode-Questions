class Solution {
public:
    int solve(TreeNode* root, int maxVal){
	if(root == NULL) return 0;

	int maxi = 0;
	if(root->val >= maxVal){
		maxVal = root->val;
		maxi++;
	}

	return maxi + solve(root->left, maxVal) + solve(root->right, maxVal);
}
    
    int goodNodes(TreeNode* root) {

        if(!root) return 0;
        return solve(root, root->val);
    }
};