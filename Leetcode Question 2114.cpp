class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int m = 0;
        vector<int> len;
        int space;
        for(int i = 0; i < sen.size(); i++){
            space = 1;
            for(int j = 0; j < sen[i].length(); j++){
                if(sen[i][j] == ' ')
                    space++;
            }
            len.push_back(space);
        }
        int max = -1;
        for(int i = 0; i< len.size(); i++){
            if(max < len[i])
                max = len[i];
        }
        return max;
    }
};