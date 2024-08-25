#include <bits/stdc++.h>
using namespace std;
class MinimalCost
{
public:
    int f(vector<int> &arr, int k, int n,int i)
    {
        if(n<=0) return 0;
            int pick = f(arr,k,n-1,i)+abs(arr[n]-arr[n-1]);
            int not_pick = INT_MAX;
            if(n>i-1) not_pick = f(arr,k,n-i,i)+abs(arr[n]-arr[n-i]);
            return min(pick,not_pick);
    }
    int minimizeCost(vector<int> &arr, int &k)
    {
        int n = arr.size();
        for(int i = 0;i<n;i++){
            int ans = f(arr,k,n,i);
            return ans;
        }
    }
};
int main()
{
    //Test case 1
    MinimalCost m;
    vector<int> arr = {10, 20, 30, 10};
    int k = 2;
    cout << m.minimizeCost(arr, k) << endl;
    return 0;
}