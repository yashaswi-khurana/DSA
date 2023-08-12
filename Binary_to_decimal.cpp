#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    // int n= 101;
    // int i = 1;
    // int sum = 0;
    // while (n!=0)
    // {
    //     int rem = n % 10;
    //     rem = rem * i;
    //     sum = sum + rem;
    //     n = n / 10;
    //     i *= 2 ;
    // }



    int n;
    cin>>n;
    int ans = 0;
    int i = 0;
    while (n!=0)
    {
        int bit = n&1;
        ans = (bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
return 0;
}