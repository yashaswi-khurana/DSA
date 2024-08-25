#include <bits/stdc++.h>
using namespace std;
int ceilSum(vector<int> &nums, int k)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += ceil((double)(nums[i]) / (double)(k));
    }
    return sum;
}
int smallestDivisor(vector<int> &nums, int threshold)
{
    int maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        maxi = max(maxi, nums[i]);
    }
    int s = 1;
    int e = maxi;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int val = ceilSum(nums, mid);
        if (val <= threshold)
        {
            ans = val;
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return ans;
}
int main()
{
    // Test case 1
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    cout << smallestDivisor(nums, threshold) << endl;
    return 0;
}