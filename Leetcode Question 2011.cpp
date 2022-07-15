class Solution {
public:
    int finalValueAfterOperations(vector<string>& str) {
        int x = 0;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == "X++" || str[i] == "++X")
                x++;
            else
                x--;
        }
        return x;
    }
};