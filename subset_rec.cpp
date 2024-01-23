#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>> &ans){
    if (index == nums.size())
    {
        ans.push_back(output);
        return;
    }
    solve(nums,output,index+1,ans);

    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);

}
vector<vector<int>> subset(vector<int> &nums){
    vector <vector<int>> ans;
    vector <int> temp;
    int index = 0;
    solve(nums, temp,index,ans);
    return ans;
}
int main()
{
    
return 0;
}