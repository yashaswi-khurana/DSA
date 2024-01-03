#include <bits/stdc++.h>
using namespace std;
int getLength(char name[]){
    int count = 0;
    while (name[count] != '\0')
    {
        count++;
    }
    return count;
}
void reverse(char name[]){
    int len = getLength(name);
    for (int i = 0; i < len/2; i++)
    {
        swap(name[i],name[len-i-1]);
    }
    cout<<name<<endl;
}
bool check_palindrome(char name[]){
    int len = getLength(name);
    for (int i = 0; i < len/2; i++)
    {
        if (name[i]!=name[len-i-1])
        {
            return false;
        }
        
    }
    return true;
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
int main()
{
    char ch[10];
    cout << "Enter a character: ";
    cin >> ch;
    cout << ch << endl;
    // Null Character = /0;
    cout<<"Length: "<<getLength(ch)<<endl;
    reverse(ch);
    //Palindrome mein dalne ke liye sare char ko lowercase mein bhejna hai
    for (int i = 0; i < getLength(ch); i++)
    {
        ch[i]=toLowerCase(ch[i]);
    }
    

    if (check_palindrome(ch))
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
    // cout<<toLowerCase('A')<<endl;
return 0;
}