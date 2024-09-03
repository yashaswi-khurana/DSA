#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};
        int ans = mp[s[0]];
        for (int i = 1; i < s.size(); i++)
        {
            if (mp[s[i]]>mp[s[i-1]])
            {
                ans+=+mp[s[i]]-2*mp[s[i-1]];
            }else
            {
                ans+=mp[s[i]];
            }
        }
        return ans;
    }
};
    int main()
    {
        //Test case 1
        string s = "III";
        Solution sol;
        cout << sol.romanToInt(s) << endl;
        //Test case 2
        string s1 = "IV";
        cout << sol.romanToInt(s1) << endl;
        //Test case 3
        string s2 = "IX";
        cout << sol.romanToInt(s2) << endl;
        //Test case 4
        string s3 = "LVIII";
        cout << sol.romanToInt(s3) << endl;
        return 0;
    }