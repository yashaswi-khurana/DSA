#include <bits/stdc++.h>
using namespace std;
int loveStory(string s){
    string constant = "codeforces";
    int count = 0;
    for (int i = 0; i < constant.size(); i++)
    {
        if(s[i]!=constant[i]) count++;
    }
    return count;
}
int main()
{
    int c;
    cin>>c;
    for(int i = 0; i<c;i++){
        string s;
        cin>>s;
        cout<<loveStory(s)<<endl;
    }
return 0;
}