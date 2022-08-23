class Solution {
public:
    bool searchMatrix(vector<vector<int>>& ma, int x) {
        // Brute force;
        int n = ma.size();
        int m = ma[0].size();
        // for(int i = 0;i<n;i++){
        //     for(int j = 0;j<m;j++){
        //         if(ma[i][j] == x)
        //             return true;
        //     }
        // }
        // return false;
        // Optimised:
        int i = 0,j = m-1;
        while(i<n && j >= 0){
            if(x>ma[i][j])
                i++;
            else if(x <ma[i][j])
                j--;
            else
                return true;
        }
        return false;
    }
};