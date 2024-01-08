#include <bits/stdc++.h>
using namespace std;
int findMissing(vector<int> arr, int n){
    int total = n*(n+1)/2;
    int sum =0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    return total-sum;
}
int main()
{
    
return 0;
}