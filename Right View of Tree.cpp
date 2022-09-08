class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        
        if(root == NULL)
            return ans;
        queue<pair<TreeNode*, int>> q;
        map<int, int> m;
        
        q.push({root,0});
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            TreeNode* node = it.first;
            int line = it.second;
            
            m[line] = node->val; // For Right View
            // if(m.find(line) == m.end()) m[line] = node->val; For Left View
            
            if(node->left) q.push({node->left, line+1});
            if(node->right) q.push({node->right, line+1});
        }
        for(auto it:m)
            ans.push_back(it.second);
        return ans;
    }
};