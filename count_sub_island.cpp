#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<int>> &grid, int row, int col){
        if(row>=grid.size() || row<0 || col>=grid[0].size() || col<0) return;
        if(grid[row][col]==0) return;
        grid[row][col]=0;
        dfs(grid,row+1,col);
        dfs(grid,row,col+1);
        dfs(grid,row,col-1);
        dfs(grid,row-1,col);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int row = grid1.size();
        int col = grid1[0].size();
        int cnt = 0;
        for(int i = 0; i < row ; i++){
            for (int j = 0; j < col; j++)
            {
                if(grid2[i][j]==1 && grid1[i][j]==0){
                    int m = i;
                    int n = j;
                    dfs(grid2,m,n);
                }
            }
            
        }
        for(int i = 0; i < row ; i++){
            for (int j = 0; j < col; j++)
            {
                if(grid1[i][j]&&grid2[i][j]){
                    grid2[i][j]=1;
                }else{
                    grid2[i][j]=0;
                }
            }
        }
        for(int i = 0; i < row ; i++){
            for (int j = 0; j < col; j++)
            {
                if(grid2[i][j]==1){
                    cnt++;
                    int m = i;
                    int n = j;
                    dfs(grid2,m,n);
                }
            }
        }
        return cnt;
    }
};
int main()
{
    //Test case 1
    vector<vector<int>> grid1 = {{1,1,1,0,0},{0,1,1,1,1},{0,0,0,0,0},{1,0,0,0,0},{1,1,0,1,1}};
    vector<vector<int>> grid2 = {{1,1,1,0,0},{0,0,1,1,1},{0,0,0,0,0},{1,0,0,0,0},{1,1,0,1,1}};
    Solution s;
    cout<<s.countSubIslands(grid1,grid2)<<endl;
    //Test case 2
    vector<vector<int>> grid3 = {{1,0,1,0,1},{1,1,1,1,1},{0,0,0,0,0},{1,1,1,1,1},{1,0,1,0,1}};
    vector<vector<int>> grid4 = {{
        1,0,1,0,1},
        {1,0,0,0,1},
        {1,1,1,1,1},
        {1,0,1,0,1},
        {0,1,0,1,0}
    };
    cout<<s.countSubIslands(grid3,grid4)<<endl;
    
return 0;
}