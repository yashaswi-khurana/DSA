#include <bits/stdc++.h>
using namespace std;
inline int getMax(int& a,int& b){
    return (a>b) ? a : b;

}
int main()
{   
    int a = 1 , b = 2;
    int ans = 0;

    // if (a>b)
    // {
    //     ans = a;
    // }
    // else
    // {
    //     ans = b;
    // }
    //Tertiary form
    ans = (a>b) ? a : b;
    cout<<ans;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);

    //Inline: no extra memory usage, faster execution but only allow max 3 lines
    cout<<ans;
return 0;
}