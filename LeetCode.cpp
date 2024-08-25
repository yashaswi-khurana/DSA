#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int s = 0;
        int e = nums.size() - 1;
        while (s <= e)
        {
            int m = s + (e - s) / 2;
            if (nums[m] == target)
            {
                return m;
            }
            else if (nums[m] < target)
            {
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
        }
        return s;
    }

#include <bits/stdc++.h>
    using namespace std;

    int singleNonDuplicate(vector<int> &arr)
    {
        int n = arr.size();
        if (n == 1)
            return arr[0];
        if (arr[0] != arr[1])
            return arr[0];
        if (arr[n - 1] != arr[n - 2])
            return arr[n - 1];

        int low = 1, high = n - 2;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
            {
                return arr[mid];
            }
            if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {1, 3, 3, 5, 5, 6, 6};
    // cout << s.searchInsert(arr, 5) << endl;
    cout << s.singleNonDuplicate(arr) << endl;
    return 0;
}