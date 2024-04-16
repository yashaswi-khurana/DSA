#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    unordered_set<int> ans;
    for(int i = 0;i<nums.size();i++){
        ans.insert(nums[i]);
    }
    for(int i : ans){
        cout<<i<<endl;
    }
    return 0;
}
int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums)<<endl;

return 0;
}