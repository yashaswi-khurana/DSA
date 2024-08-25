#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int f(const std::vector<int> &height, int n, std::vector<int> &dp)
    {
        if (n <= 0)
            return 0;
        if (dp[n - 1] != INT_MAX)
            return dp[n - 1];
        int pick = f(height, n - 1, dp) + abs(height[n] - height[n - 1]);
        int no_pick = INT_MAX;
        if (n > 1)
        {
            no_pick = f(height, n - 2, dp) + abs(height[n] - height[n - 2]);
        }
        dp[n - 1] = min(pick, no_pick);
        return dp[n - 1];
    }

    int minimumEnergy(const std::vector<int> &height, int n)
    {
        vector<int> dp(n + 1, 0);
        dp[0] = 0;
        for (int i = 1; i < n; i++)
        {
            int pick = dp[i - 1] + abs(height[i] - height[i - 1]);
            int no_pick = INT_MAX;
            if (i > 1)
            {
                no_pick = dp[i - 2] + abs(height[i] - height[i - 2]);
            }
            dp[i] = min(pick, no_pick);
        }
        return dp[n - 1];

        // return f(height, n - 1, dp);
    }
};
int main()
{
    Solution s;
    vector<int> height3 = {10, 20, 30, 10};
    int n3 = 4;
    cout << s.minimumEnergy(height3, n3) << endl;
    return 0;
}