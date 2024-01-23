#include <bits/stdc++.h>
using namespace std;
int convertStr(string str){
    // int ans = 0;
    // for(int i=0;i<str.length();i++){
    //     if (str[i]-'a'>26 || str[i]-'A'>26)
    //     {
    //         continue;
    //     }
    //     ans = ans*10 + (str[i]-'0');
    // }
    int ans = 0;
    bool negative = false;
    for(int i=0;i<str.length();i++){
        if (str[i]-'0'<10 || str[i]=='-')
        {
            if (str[i]=='-')
            {
                negative = true;
            }
            else if (str[i]==' ')
            {
                continue;
            }
            
            else
            {
            ans = ans*10 + (str[i]-'0');
            }
            
        }
        else
        {
            continue;
        }
        
    }
    if (negative)
    {
        ans = -ans;
    }
    return ans;
}
int main()
{
    cout<<convertStr("-42")<<endl;
return 0;
}