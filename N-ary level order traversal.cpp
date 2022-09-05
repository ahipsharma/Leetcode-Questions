class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        
        queue<Node*> q;
        if(root == nullptr)
            return {};
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            ans.emplace_back();
            for(int i = 0;i<n;i++){
                Node* node = q.front();
                q.pop();
                ans.back().push_back(node->val);
                for(Node* child:node->children){
                    q.push(child);
                }
            }
        }
        return ans;
    }
};