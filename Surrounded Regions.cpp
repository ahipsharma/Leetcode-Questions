class Solution {
private:
    void dfs(int row, int col,  vector<vector<int>> &vis, vector<vector<char>>& mat,
            int delRow[], int delCol[]){
        
        vis[row][col] = 1;
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0;i<4;i++){
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol] == 'O'){
                dfs(nrow, ncol, vis, mat, delRow, delCol);
            }
        }
    }
public:
    void solve(vector<vector<char>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};
        vector<vector<int>> vis(n, vector<int>(m,0));
        
        // Checking 1st and last row
        for(int j = 0;j<m;j++){
            if(!vis[0][j] && mat[0][j] == 'O')
                dfs(0, j, vis, mat, delRow, delCol);
            if(!vis[n-1][j] && mat[n-1][j] == 'O')
                dfs(n-1, j, vis, mat, delRow, delCol);
        }
        
        // Checking 1st and last column
        for(int i = 0;i<n;i++){
            
            if(!vis[i][0] && mat[i][0] == 'O')
                dfs(i, 0, vis, mat, delRow, delCol);
            
            if(!vis[i][m-1] && mat[i][m-1] == 'O')
                dfs(i, m-1, vis, mat, delRow, delCol);
        }
        
        for(int i = 0;i<n;i++)
            for(int j = 0;j<m;j++)
                if(!vis[i][j] && mat[i][j] == 'O')
                    mat[i][j] = 'X';
        // return mat;
    }
};