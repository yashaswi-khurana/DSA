#include <bits/stdc++.h>
using namespace std;
void trav(vector<vector<int>> arr)
{
    int row = arr.size();
    if (row == 0) return;
    int col = arr[0].size();
    for (int i = row-1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = col-1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main()
{
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    trav(arr);
    return 0;
}