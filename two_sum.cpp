#include <bits/stdc++.h>
using namespace std;
vector <int> two_sum(vector<int>& nums,int target){
    vector<int> ans;
    int size = nums.size();
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
            
        }
        
    }
return ans;
    
}
int main()
{
    
return 0;
}