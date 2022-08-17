class Solution {
private:
    int diameter(TreeNode* root, int &maxi){
        if(root == NULL)
            return 0;
        int left = diameter(root->left, maxi);
        int right = diameter(root->right, maxi);
        maxi = max(maxi, left+right);
        return 1 + max(left,right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        diameter(root, maxi);
        return maxi;
    }
};