#include <bits/stdc++.h>
using namespace std;
int prefixCount(vector<string> &words, string pref)
{
    int ans = 0;
    for (int i = 0; i < words.size(); i++)
    {
        if(words[i].substr(0,pref.size())==pref){
            ans++;
        }
    }
    return ans;
}
int main()
{
    vector<string> words = {"pay","attention","practice","attend"};
    string pref = "at";
    cout<<prefixCount(words,pref)<<endl;
    return 0;
}