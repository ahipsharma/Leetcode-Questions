class Solution {
public:
    vector<int> ans;
    bool isValidBST(TreeNode* root) {
        inorder(root);
        for(int i = 0;i<ans.size() - 1; i++){
            if(ans[i]>=ans[i+1])
                return false;
        }
        return true;
    }
    void inorder(TreeNode* root){
        if(root == NULL)
            return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
};