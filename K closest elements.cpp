class Solution {
private:
    void closest(vector<int> &arr, int k, int x, vector<int> &ans){
        priority_queue<pair<int, int>> q;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            int diff = abs(arr[i] - x);
            q.push({diff, arr[i]});
            if(q.size() > k)
                q.pop();
        }
        while(!q.empty()){
            int t = q.top().second;
            ans.push_back(t);
            q.pop();
        }
        sort(ans.begin(), ans.end());
    }
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        closest(arr, k, x, ans);
        return ans;
    }
};