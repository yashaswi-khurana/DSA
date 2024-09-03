#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> two_d(vector<int> nums, int m, int n){
    vector<vector<int>> ans;
    if(nums.size()!=m*n) return ans;
    for (int i = 0; i < m; i++)
    {
        vector<int> temp;
        for(int j = 0; j<n;j++){
            temp.push_back(nums[i+j]);
        }
        ans.push_back(temp);
    }
    
    return ans;
}
int main()
{
    
return 0;
}