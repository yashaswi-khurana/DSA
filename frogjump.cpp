#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimizeCost(int n, int k, vector<int> &height)
    {
        vector<int> dp(n, -1);
        dp[0] = 0;
        for (int i = 1; i < n; i++)
        {
            int ans = INT_MAX;
            for (int j = 1; j <= k; j++)
            {
                if (i - j >= 0)
                {
                    int fs = dp[i - j] + abs(height[i] - height[i - j]);
                    ans = min(ans, fs);
                }
            }
            dp[i] = ans;
        }

        return dp[n - 1];
    }

    int solve(int n, vector<int> &height)
    {
        vector<int> dp(n, -1);
        dp[0] = 0;
        for (int i = 1; i < n; i++)
        {
            int fs = dp[i - 1] + abs(height[i] - height[i - 1]);
            int ss = INT_MAX;
            if (i > 1)
            {
                ss = dp[i - 2] + abs(height[i] - height[i - 2]);
            }
            dp[i] = min(fs, ss);
        }
        return dp[n - 1];
    }

    int rob(std::vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];

        std::vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = (nums[0], nums[1]);

        for (int i = 2; i < n; ++i)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[n - 1];
    }
    
};
int main()
{
    Solution s;
    vector<int> height{1, 2, 3, 1};
    int n = height.size();
    // cout << s.solve(n,height) << endl;
    // cout << s.minimizeCost(n, 4, height) << endl;
    cout << s.rob(height) << endl;
}
