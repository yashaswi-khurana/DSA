#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> rotateTheBox(vector<vector<char>> &boxGrid)
{
    int col = boxGrid[0].size();
    int row = boxGrid.size();
    vector<vector<char>> ans(col, vector<char>(row, '.'));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (boxGrid[i][j]=='*')
            {
                ans[j][i]='*';
            }
        }
    }
    
    return ans;
}
int main()
{
vector<vector<char>> key = {
    {'#', '#', '*', '.', '*', '.'},
    {'#', '#', '#', '*', '.', '.'},
    {'#', '#', '#', '.', '#', '.'}
};
    vector<vector<char>> ans = rotateTheBox(key);
    for (auto vector: ans){
        for(auto ch: vector){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}