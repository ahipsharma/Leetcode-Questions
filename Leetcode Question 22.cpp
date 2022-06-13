class Solution {
public:
    void recursion(vector<string>& ans,int open ,int close,string s,int n){
        if(open == n && close == n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            recursion(ans,open+1,close,s+"(",n);
        }
        if(open>close){
            recursion(ans,open,close+1,s+")",n);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        recursion(ans,0,0,s,n);
        return ans;
    }
};