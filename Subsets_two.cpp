#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void r(vector<int>& num, vector<vector<int>>& ans, int index, vector<int> subset) {
        if (index == num.size()) {
            ans.push_back(subset);
            return; // Return here to avoid further unnecessary processing
        }

        // Exclude the current element
        r(num, ans, index + 1, subset);

        // Include the current element
        subset.push_back(num[index]);
        r(num, ans, index + 1, subset);

        // Remove the last element to backtrack
        subset.pop_back();
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> subset;
        r(nums, ans, 0, subset);
        return ans;
    }
};

void print(const vector<vector<int>>& ans) {
    for (const auto& subset : ans) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    Solution s;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> ans = s.subsetsWithDup(nums);
    print(ans);
    return 0;
}
