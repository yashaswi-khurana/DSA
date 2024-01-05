#include <bits/stdc++.h>
int modularExponentiation(int x,int n,int m){
    int res=1;
    while(n>0){
        if(n&1) res = (1LL*(res)*(x)%m)%m;
        x = ((x)%m*(x)%m)%m;
        n = n>>1;
    
    }
    return res;
}
using namespace std;
int main()
{
    
return 0;
}