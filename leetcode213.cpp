#include <bits/stdc++.h>
using namespace std;
int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);
    
    // Helper function to use tabulation (DP) method
    auto robTabulation = [](vector<int>& nums, int start, int end) {
        vector<int> dp(end - start + 1, 0);
        
        // Base cases
        dp[0] = nums[start];
        dp[1] = max(nums[start], nums[start + 1]);
        
        // Fill the dp array
        for (int i = 2; i <= end - start; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[start + i]);
        }
        
        return dp[end - start];
    };
    
    // Case 1: Ignore the first house (rob from the second house to the last house)
    int ans1 = robTabulation(nums, 1, n - 1);
    
    // Case 2: Ignore the last house (rob from the first house to the second-last house)
    int ans2 = robTabulation(nums, 0, n - 2);
    
    // The final answer is the maximum of the two cases
    return max(ans1, ans2);
}

int main()
{
    //Test case 1
    vector<int> house = {2,7,9,3,1};
    cout<<rob(house)<<endl;
    //Test case 2
    house = {2,1,1,2};
    cout<<rob(house)<<endl;
return 0;
}