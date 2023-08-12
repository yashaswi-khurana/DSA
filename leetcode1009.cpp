#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int k = n;
    int mask=0;
    while (k!=0){
        mask=(mask<<1)|1;
        k=k>>1;
    }
    int ans = (~n) & mask;
    cout<< ans<<endl;
return 0;
}