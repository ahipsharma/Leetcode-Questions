class Solution {
public:
    string tree2str(TreeNode* root) {
        string ans;
        
        if(root == NULL)
            return "";
        ans += to_string(root->val);
        if(root->left)
            ans += '('+tree2str(root->left)+')';
        else if(root->right)
            ans += "()";
        if(root->right)
            ans += '('+ tree2str(root->right) + ')';
        
        return ans;
    }
};