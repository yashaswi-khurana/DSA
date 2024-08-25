#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        output[0] = 1;
        for(int i=1; i<n; i++){
            output[i] = output[i-1] * nums[i-1];
            // cout<<output[i]<<" ";
        }
        cout<<endl;
        int right = 1;
        for(int i=n-1; i>=0; i--){
            output[i] *= right;
            right *= nums[i];
        }
        return output;
    }
};
int main()
{
    //Test case 1
    vector<int> nums = {1,2,3,4};
    Solution obj;
    vector<int> output = obj.productExceptSelf(nums);
    for(int i=0; i<output.size(); i++){
        cout<<output[i]<<" ";
    }
return 0;
}