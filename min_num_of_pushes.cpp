#include <bits/stdc++.h>
using namespace std;
int min_push(string s)
{
    vector<int> f(26, 0);
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        f[s[i] - 'a']++;
    }
    sort(f.begin(), f.end(), greater <int>());
    for (int i = 8; i < 16; i++)
    {
        f[i] = f[i] * 2;
    }
    for (int i = 16; i < 24; i++)
    {
        f[i] = f[i] * 3;
    }
    for (int i = 24; i < 26; i++)
    {
        f[i] = f[i] * 4;
    }
    for (int i = 0; i < 26; i++)
    {
        sum += f[i];
    }
    return sum;
}
int main()
{   
    string s = "abcde";
    cout<<min_push(s)<<endl;
    return 0;
}