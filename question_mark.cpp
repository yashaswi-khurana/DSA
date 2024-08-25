#include <bits/stdc++.h>
using namespace std;
int ans(string s,int n)
{
    int option[5] = {0};
    for (int i = 0; i < 4*n; i++)
    {
        if (s[i] == 'A')
        {
            option[0]++;
        }
        else if (s[i] == 'B')
        {
            option[1]++;
        }
        else if (s[i] == 'C')
        {
            option[2]++;
        }
        else if (s[i] == 'D')
        {
            option[3]++;
        }
    }
    int max_achieve = 0;
    for (int i = 0; i < 5; i++)
    {
        if (option[i] > n)
        {
            max_achieve += n;
        }
        else
        {
            max_achieve += option[i];
        }
    }
    return max_achieve;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {   
        int n;
        cin>>n;
        string s;
        cin >> s;
        cout << ans(s,n) << endl;
    }
    return 0;
}