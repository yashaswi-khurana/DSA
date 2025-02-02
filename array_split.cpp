// You are given a 0-indexed integer array nums of length n.
// nums contains a valid split at index i if the following are true:
// The sum of the first i + 1 elements is greater than or equal to the sum of the last n - i - 1 elements.
// There is at least one element to the right of i. That is, 0 <= i < n - 1.
// Return the number of valid splits in nums.

#include <bits/stdc++.h>
using namespace std;
int split (vector<int> arr){
    int cnt =0;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum+=arr[i];
    }
    int ini_sum = arr[0];
    sum = sum - ini_sum;
    for (int i = 1; i < arr.size()-1; i++)
    {
        ini_sum+=arr[i];
        if(ini_sum>=sum) cnt++;
        sum = sum - ini_sum;
    }
    return cnt;
}
int main()
{
    vector<int> ans = {1,1,1,2,3};
    cout<<split(ans)<<endl;
return 0;
}