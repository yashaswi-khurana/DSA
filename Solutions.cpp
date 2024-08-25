#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int nthUglyNumber(int n)
    {
        vector<int> uglyNumbers(n);
        uglyNumbers[0] = 1; // The first ugly number is 1

        int i2 = 0, i3 = 0, i5 = 0;
        int nextMultipleOf2 = 2;
        int nextMultipleOf3 = 3;
        int nextMultipleOf5 = 5;

        for (int i = 1; i < n; ++i)
        {
            int nextUglyNumber = min(nextMultipleOf2, min(nextMultipleOf3, nextMultipleOf5));
            uglyNumbers[i] = nextUglyNumber;

            if (nextUglyNumber == nextMultipleOf2)
            {
                i2++;
                nextMultipleOf2 = uglyNumbers[i2] * 2;
            }
            if (nextUglyNumber == nextMultipleOf3)
            {
                i3++;
                nextMultipleOf3 = uglyNumbers[i3] * 3;
            }
            if (nextUglyNumber == nextMultipleOf5)
            {
                i5++;
                nextMultipleOf5 = uglyNumbers[i5] * 5;
            }
        }

        return uglyNumbers[n - 1];
    }
    int partition(int l, int h, vector<int> &nums)
    {
        int pivot = nums[l];
        int i = l + 1;
        int j = h;

        while (true)
        {
            while (i <= h && nums[i] <= pivot)
            {
                i++;
            }
            while (j >= l && nums[j] > pivot)
            {
                j--;
            }
            if (i >= j)
                break;
            swap(nums[i], nums[j]);
        }
        swap(nums[l], nums[j]);
        return j;
    }
    void qs(vector<int> &nums, int l, int h)
    {
        if (l < h)
        {
            int p = partition(l, h, nums);
            qs(nums, l, p - 1);
            qs(nums, p + 1, h);
        }
    }
    vector<int> quick_sort(vector<int> &nums)
    {
        qs(nums, 0, nums.size() - 1);
        return nums;
    }
    vector<int> graph_bfs(int V,vector<int> adj[]){
        vector<int> bfs;
        int vis[V]={0};
        queue<int> q;
        q.push(0);
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
        return bfs;
    }
    int rotating_point(vector<int> &nums)
    {
        int l = 0; 
        int r = nums.size() - 1;
        while (r>l)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] > nums[r])
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }
        return l;
    }
};


int main()
{
    vector<int> nums = {4,5,6,7,8,1,2};
    Solution s;
    int ans = s.rotating_point(nums);
    cout << ans << endl;
}