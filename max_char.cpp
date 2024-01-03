#include <bits/stdc++.h>
using namespace std;
char getMax(string s){
    int freq[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        //lower case
        int number=0;
        if (ch>='a' && ch<='z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
        
    }
    int maxi = -1;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i]>max)
        {
            max = freq[i];
            ans = i;
        }
        
    }
    char finalAns='a'+ans;
    return finalAns;
}
int main()
{
    string s;

return 0;
}

//getline and delimater 