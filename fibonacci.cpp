#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    // cout<<endl;
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    int ans = fibonacci(n-1)+fibonacci(n-2);
    return ans;
} 
int main()
{
    cout<<fibonacci(3)<<endl;
return 0;
}