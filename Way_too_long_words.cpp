#include <bits/stdc++.h>
using namespace std;
string wayToLong(string s){
    if (s.size()>10)
    {
        return s[0]+to_string(s.size()-2)+s[s.size()-1];
    }
    return s;
}
int main()
{   
    int s;
    cin>>s;
    for (int i = 0; i < s; i++)
    {
        string k;
        cin>>k;
        cout<<wayToLong(k)<<endl;
    }
    
return 0;
}