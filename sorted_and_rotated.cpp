#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n])
                count++;
            if (count > 1)
                return false;
        }
        return true;
    }
};
int main()
{

    return 0;
}