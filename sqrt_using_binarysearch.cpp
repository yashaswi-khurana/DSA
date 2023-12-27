#include <bits/stdc++.h>
using namespace std;
long long int sqrt(int s){
    long long int l=0,r=s;
    long long int ans=0;
    long long int mid = l+(r-l)/2;
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

double decimal(int s,int p){
    double factor = 1;
    double ans=0;
    for (int i = 0; i < p; i++)
    {
        factor=factor*10;
        for (int j = 0; j*j <s ; j=j+factor)
        {
            ans=j;
        }
        
    }
    
}
int main()
{
    long long int ans;
    cin>>ans;
    cout<<sqrt(ans)<<endl;
return 0;
}