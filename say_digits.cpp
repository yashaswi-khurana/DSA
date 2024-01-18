#include <bits/stdc++.h>
using namespace std;
void sayDigit(int n){
    vector<string> a = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    
    if (n==0)
    {
        return;
    }
    int s =n%10;
    // cout<<a[s]<<" ";
    sayDigit(n/10);
    cout<<a[s]<<" ";
}
int main()
{
    sayDigit(426);
return 0;
}