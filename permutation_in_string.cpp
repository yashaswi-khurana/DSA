#include <bits/stdc++.h>
using namespace std;
bool checkEqual(int a[26],int b[26]){
    for (int i = 0; i < 26; i++)
    {
        if (a[i]!=b[i])
        {
            return 0;
        }
        
    }
    return 1;
}
bool permutation(string s, string v){
    //character count array
    int count[26]={};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]-'a']++;
    }
    //traverse s2 string in window of size s1 length and compare
    int i =0;
    int WindowSize = s1.length();
    int count2[26]={0};
    //running for first window
    while (i<WindowSize && s2.length())
    {
        int index =s2[i]-'a';
        count2[index]++;
        i++;
    }
    if (checkEqual(count1,count2))
    return 1;

    //age window prcess karo
    while (i<s2.length())
    {
        int index =s2[i]-'a';
        count2[index]++;
        index = s2[i-WindowSize]-'a';

        count2[index]--;
        i++;
        if (checkEqual(count1,count2))
        return 1;
    }
    return 0;
}
int main()
{
    
return 0;
}