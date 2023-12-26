#include <bits/stdc++.h>
using namespace std;
int sqrt(int s){
    int l=0,r=s;
    int ans=0;
    int mid = l+(r-l)/2;
    while (l<=r)
    {
        if(mid*mid==s){
            return mid;
        }
        else if (mid*mid>s)
        {
            r=mid-1;
        }
        else{
            l=mid+1;
            ans=mid;
        }
        mid = l+(r-l)/2;
    }
    return ans;
}
int main()
{
    int ans;
    cin>>ans;
    cout<<sqrt(ans)<<endl;
return 0;
}