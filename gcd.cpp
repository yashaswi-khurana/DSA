#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    if(a==0) return b;
    while (a!=b)
    {
        if(a>b) a = a-b;
        else b =b-a;
    }
    return a;
}
int main()
{
    int a,b;
    cout<<"Enters the values o a&b: ";
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
    
return 0;
}