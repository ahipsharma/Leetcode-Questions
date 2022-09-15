class Solution {
public:
    vector<int> findOriginalArray(vector<int>& arr) {
        queue<int> q;
        vector<int> ans;
        
        if(arr.size() == 0)
            return ans;
        
        sort(arr.begin(), arr.end());
        for(auto i:arr){
            if(q.front() == i)
                q.pop();
            else{
                q.push(2*i);
                ans.push_back(i);
            }
        }
        if(q.empty())
            return ans;
        else{
            ans.clear();
            return ans;
        }
    }
};