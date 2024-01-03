#include <bits/stdc++.h>
using namespace std;
string remove_substring(string s, string v){
    int lens =s.length();
    int lenv = v.length();
    while (lens!=0 && s.find(v)<lens)
    {
        s.erase(s.find(v),lenv);
    }
    return s;
}
int main()
{
    cout<<"Hello World";
return 0;
}