#include <bits/stdc++.h>
using namespace std;
void push_0(vector<int>& nums){
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i+1; j<nums.size(); j++)
        {
            if (nums[i]==0)
            {
                swap(nums[i],nums[j]);
                continue;
            }
            
        }
        
    }
    
}
int main()
{
    vector<int> arr = {0,1,0,3,12};
    push_0(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
return 0;
}