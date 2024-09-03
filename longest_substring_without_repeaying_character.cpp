#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int lengthOfLongestSubstring(string s) {
    int ch[256];
    fill(ch, ch + 256, -1); 

    int ans = 0; 
    int l = 0;   

    for (int r = 0; r < s.size(); r++) { 
        if (ch[s[r]] != -1) {
            if (ch[s[r]] >= l) {
                l = ch[s[r]] + 1;
            }
        }
        ch[s[r]] = r;
        ans = max(ans, r - l + 1); 
    }
    return ans;
}
};
int main()
{
    Solution s;
    string str;
    cin>>str;
    cout<<s.lengthOfLongestSubstring(str);
return 0;
}