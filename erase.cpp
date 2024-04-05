#include <bits/stdc++.h>
using namespace std;
int main()
{
string a = "abcd";
string ans ;
for (int i = 0; i < a.size(); i++)
{
    ans = a[i] + ans;
}
cout<<ans<<endl;
return 0;
}