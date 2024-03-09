#include <bits/stdc++.h>
using namespace std;
bool isSafe(int x,int y,int n,vector<vector<int>> &m)
{
    if ((x>=0 && x<n) && (y>=0 && y<n) && m[x][y]==1)
    {
        return true;
    }
    return false;
}
void solve(vector<vector<int>> &m,int n,int x,int y,string path,vector<vector<int>> &vis,vector<string> &res)
{
    if (x==n-1 && y==n-1)
    {
        res.push_back(path);
        return;
    }
    vis[x][y] = 1;
    int newx= x+1;
    int newy= y;
    if (isSafe(newx,newy,n,m))
    {
        path.push_back('D');
        solve(m,n,newx,newy,path,vis,res);
        path.pop_back();
    }

    newx= x;
    newy= y-1;
    if (isSafe(newx,newy,n,m))
    {
        path.push_back('L');
        solve(m,n,newx,newy,path,vis,res);
        path.pop_back();
    }

    newx= x;
    newy= y+1;
    if (isSafe(newx,newy,n,m))
    {
        path.push_back('R');
        solve(m,n,newx,newy,path,vis,res);
        path.pop_back();
    }

    newx= x-1;
    newy= y;
    if (isSafe(newx,newy,n,m))
    {
        path.push_back('U');
        solve(m,n,newx,newy,path,vis,res);
        path.pop_back();
    }
} 

vector<string> findPath(vector<vector<int>> &m, int n)
{   
    vector<string> res;
    if (m[0][0]==0)
    {
        return res;
    }
    
    int srcx=0;
    int srcy=0;
    string path = "";
    vector<vector<int>> vis = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            vis[i][j] = 0;
        }
        
    }
    
    string path= "";
    solve(m,n,srcx,srcy,path,vis,res);
    sort(res.begin(),res.end());
    return res;
}
int main()
{
    
return 0;
}