#include <bits/stdc++.h>
using namespace std;
bool valid(char ch){
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return true;
    }
    else{
        return false;
    }
}
char toLowerCase(char ch){
    if (ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
}
bool check_palindrome(string a){
    int s = 0;
    int e = a.length()-1;
    while (s<=e){
        if ((a[s])!=(a[e]))
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}
bool isPalindrome(string s){
    int i = 0;
    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
        
    }
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j]=toLowerCase(temp[j]);
    }
    return check_palindrome(temp);
}
int main()
{
    string temp = " ";
    cout<<isPalindrome(temp)<<endl;
return 0;
} 