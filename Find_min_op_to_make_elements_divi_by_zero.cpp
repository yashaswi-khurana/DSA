#include <bits/stdc++.h>
using namespace std;
int minimumOperations(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]%3!=0)ans+=1;
    }
    return ans;
}
int main()
{
    vector<int> array = {1,2,3,4};
    cout<<minimumOperations(array)<<endl;
    return 0;
}