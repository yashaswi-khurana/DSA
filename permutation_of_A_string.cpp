#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> nums,vector<vector<int>>& ans,int index)
{
    //BaseCase 
    if(index>=nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++)
    {
        swap(nums[i],nums[index]);
        solve(nums,ans,index+1);
        //backtrack
        swap(nums[i],nums[index]);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        solve(nums,ans,index);
        return ans;
    }
int main()
{
    vector<int> nums={1,2,3};
    vector<vector<int>> ans=permute(nums);
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
return 0;
}