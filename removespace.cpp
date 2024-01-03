#include <bits/stdc++.h>
using namespace std;
string remove_space(string s){
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!=' ')
        {
            ans.push_back(s[i]);
        }
        else
        {
            ans.push_back('@');
            ans.push_back('4');
            ans.push_back('0');
        }
        
    }
    return ans;
}
int main()
{   
return 0;
}
//What if agar same string mein karna hai
//in place solution