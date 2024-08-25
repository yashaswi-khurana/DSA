#include <bits/stdc++.h>
using namespace std;
int maxDistance(vector<vector<int>>& arrays) {
    int gmi = arrays[0][0];
    int gma = arrays[0].back();
    int res = INT_MIN;
    for (int i = 1; i < arrays.size(); i++)
    {
        int lmi = arrays[i][0];
        int lma = arrays[i].back();

        res = max(res,max(lma-gmi,gma-lmi));

        gmi = min(lmi,gmi);
        gma = max(lma,gma);
    }
    return res;
    
}
int main()
{
    //Test case 1
    vector<vector<int>> arrays = {{1,2,3},{4,5},{1,2,3}};
    cout<<maxDistance(arrays)<<endl;
    //Test case 2
    arrays = {{1},{1}};
    cout<<maxDistance(arrays)<<endl;
    //Test case 3
    arrays = {{1,4},{0,5}};
    cout<<maxDistance(arrays)<<endl;
    //Test case 4
    arrays = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<maxDistance(arrays)<<endl;
return 0;
}