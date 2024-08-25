#include <bits/stdc++.h>
using namespace std;
// int f(int cur_x, int cur_y, vector<vector<int>>& grid, int des_y, int des_x) {
//     if (cur_x == des_x && cur_y == des_y) {
//         return grid[cur_y][cur_x];
//     }
//     if (cur_x > des_x || cur_y > des_y) {
//         return INT_MAX;
//     }
//     int right = f(cur_x + 1, cur_y, grid, des_y, des_x);
//     int down = f(cur_x, cur_y + 1, grid, des_y, des_x);
//     return grid[cur_y][cur_x] + min(right, down);
// }
int minPathSum(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
            {
                dp[i][j] = grid[i][j];
            }
            else
            {
                int down = INT_MAX, right = INT_MAX;

                if (i > 0)
                    down = dp[i - 1][j] + grid[i][j];

                if (j > 0)
                    right = dp[i][j - 1] + grid[i][j];

                dp[i][j] = min(down, right);
            }
        }
    }
    return dp[m - 1][n - 1];
}

int main()
{
    // Test case 1
    vector<vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    cout << minPathSum(grid) << endl;
    // Test case 2
    grid = {{1, 2, 3}, {4, 5, 6}};
    cout << minPathSum(grid) << endl;
    return 0;
}