class Solution {
public:
    string defangIPaddr(string add) {
        string ans;
        for(int i = 0; i < add.length(); i++){
            if(add[i] == '.'){
                ans.push_back('[');
                ans.push_back('.');
                ans.push_back(']');
            }
            else
                ans.push_back(add[i]);
        }
        return ans;
    }
};