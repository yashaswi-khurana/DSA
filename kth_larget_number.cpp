#include <bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < nums.size(); i++)
    {
        if (pq.size() < k)
        {
            pq.push(nums[i]);
        }
        else
        {
            if (nums[i] > pq.top())
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }
    }
    return pq.top();
    
}
int main()
{
    //Test case 1
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;
    cout<<findKthLargest(nums, k)<<endl;
    return 0;
}