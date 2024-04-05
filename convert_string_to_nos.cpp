#include <bits/stdc++.h>
using namespace std;
int convert_string_to_nos(string s){
    int n = s.length();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        char a = s[i];
        char zero = '0';
        ans = ans*10 + (a-zero);
    }
    return ans;
}
int main()
{
    string s = "1234";
    cout<<convert_string_to_nos(s);
return 0;
}