#include <bits/stdc++.h>
using namespace std;
int main(){
 long long int n;
 cin>>n;
 long long int org_sum = 0;
 for (int i = 1; i<n ; i++) {
  long long int k;
  cin>>k;
  org_sum+=k;
 }
 long long int pre_sum = n*(n+1)/2;
 cout<<pre_sum-org_sum<<endl;
 return 0;
}
