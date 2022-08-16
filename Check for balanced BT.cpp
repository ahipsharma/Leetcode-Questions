class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return balanced(root) != -1;
    }
    int balanced(TreeNode* root){
        if(root == NULL)
            return 0;
        int left = balanced(root->left);
        int right = balanced(root->right);
        
        if(abs(left-right)>1)
            return -1;
        if(left == -1 || right == -1)
            return -1;
        return 1 + max(left, right);
    }
};