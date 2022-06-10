class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //Strategy:
        //Sort the array on basis of length of string.
        //Now check the characters common in 1st and last string
        //Return the substrings.
        sort(strs.begin(), strs.end());
        if (strs[0] == "" || strs.size() == 1) 
            return strs[0];
        int x = 0;
        for (int i = 0;i < strs[0].size(); i++){
            if (strs[0][i] != strs[strs.size() - 1][i])
                break;
            x++;
        }
        return strs[0].substr(0,x);
    }
};