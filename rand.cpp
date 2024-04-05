#include <bits/stdc++.h>
using namespace std;
    char findTheDifference(string s, string t) {
        int n_t = s.size()-1;
        int sum_s = 0;
        int sum_t = 0;
        for (int i = 0; i <= n_t; i++){
            int m = s[i] - '0';
            int n = t[i] - '0';
            sum_s += m-'0';
            sum_t +=n-'0';
        }
        int diff = sum_t-sum_s;
        char ans = diff+'0';
        return ans;
    }
int main()
{
    string s = "abcd";
    string t = "abcde";
    cout<<findTheDifference(s,t)<<endl;
return 0;
}