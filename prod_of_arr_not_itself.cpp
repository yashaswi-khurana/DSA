#include <bits/stdc++.h>
using namespace std;
int main()
{   vector<int> nums = {0,4,0};
        int wprod = 1;
        int prod = 1;
        for (int i = 0; i< nums.size();i++){
            if(nums[i]!=0){
            wprod = wprod*nums[i];
            }
            prod=prod*nums[i];
        }
        for (int i = 0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[i]=prod/nums[i];
            }else{
            nums[i]=wprod;
            }
        }
    // cout<<wprod<<endl;
    for(int i : nums){
        cout<<i<<endl;
    }
return 0;
}