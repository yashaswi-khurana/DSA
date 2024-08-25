#include <bits/stdc++.h>
using namespace std;
int rob(vector<int> house){
    int n = house.size();
    if (n==1) return house[0];
    if (n==2) return max(house[0],house[1]);
    vector<int> dp(n+1,0);
    dp[0]=house[0];
    dp[1]=house[1];
    for (int i = 2; i < n; i++)
    {
        int pick = dp[i-2]+house[i];
        int not_pick = dp[i-1];
        dp[i] = max(pick,not_pick);
    }
    return dp[n-1];
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