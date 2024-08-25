#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0;i < nums.size();i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                {
                    j++;
                }
                else if (sum>0)
                {
                    k--;
                }
                else
                {
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (k>j && nums[j]==nums[j-1])
                    {
                        j++;
                    }
                    while (k>j && nums[k]==nums[k+1])
                    {
                        k--;
                    }
                }
            }
        }
        return ans;
    }
    int rangeBitwiseAnd(int left, int right)
    {
        int shift = 0;
        while (left < right)
        {
            left = left >> 1;
            right = right >> 1;
            shift++;
        }
        return left << shift;
    }
};
int main()
{
    Solution s;
    cout << s.rangeBitwiseAnd(5, 7) << endl;
    return 0;
}