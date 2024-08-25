#include <bits/stdc++.h>
using namespace std;
int subarraysum(vector<int>& arr,int target){
    int n=arr.size();
    int sum=0;
    int count=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==target){
            count++;
        }
        if(mp.find(sum-target)!=mp.end()){
            count+=mp[sum-target];
        }
        mp[sum]++;
    }
    return count;
}
int main()
{
    // vector<int> arr={1,2,3,4,5};
    // int target=10;
    vector<int> arr={10,2,-2,-20,10};
    int target=10;
    cout<<subarraysum(arr,target);
return 0;
}