#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp(i+1,1);
            ans.push_back(temp);
        }
        for (int i = 2; i < n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
            
        }
        return ans;
    }
int main()
{
    //Test case 1
    int n = 5;
    vector<vector<int>> ans = generate(n);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    //Test case 2
    n = 1;
    ans = generate(n);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}