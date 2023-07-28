#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // if (n>0)
    // {
    //     cout<<"n is positive"<<endl;
    // }
    // else if (n=0)
    // {
    //     cout<<"n is zero"<<endl;
    // }
    // else
    // {
    //     cout<<"n is negative"<<endl;
    // }
    

    // int a;
    // int b;
    // cout<<"enter the value of a ";
    // cin>>a;
    // cout<<"enter the value of b ";
    // cin>>b;
    // if (a>b)
    // {
    //     cout<<"a is greater than b"<<endl;
    // }
    // else if (a<b)
    // {
    //     cout<<"b is greater than a"<<endl;
    // }
    // else
    // {
    //     cout<<"b equal to a"<<endl;
    // }
    


    // int a,b;
    // cin>>a>>b;
    // a=cin.get();
    //cout<<" value of a and b is"<<a<<" "<<b<<endl;
    // cout<<" Value of a is:" <<a<<endl;

//     char ch;
//     cout<<"please enter character here: ";
//     cin>>ch;
// if ('a' <= ch && ch <= 'z')
// {
//     cout << "It is Lowercase" << endl;
// }
// else if ('A' <= ch && ch <= 'Z')
// {
//     cout << "It is Uppercase" << endl;
// }
// else if ('1' <= ch && ch <= '9')
// {
//     cout << "It is Numeric" << endl;
// }

    
    // int n;
    // cin>>n;
    // int i = 2;
    // // int b=0;
    // while (i<n)
    // {
        // cout<<i<<" ";
        // i++;
        // b+=i;
        // i++;
        // b+=i;
        // i+=2;

        // Farhenite to cecius
        // float C;
        // C=((F-32)*5/9);
        // cout<<F<<"-->"<<C<<endl;
        // F++;


        // To check wether the number is prime or not 

    //     if (n%i==0)
    //     {
    //         cout<<"not prime for "<<i<<endl;
    //     }
    //     else
    //     {
    //         cout<<"prime for "<<i<<endl;
    //     }
    //     i++;
    // }
    // cout<<b<<endl;



//Pattern
int n; 
cin>>n;
int i=0;
while (i<n)//row ke liye chlega ye loop
{
    int j = 1;
    while (j<=n)
    {
        cout<<i;
        j++;
    } cout<<endl;
    i++;
}

    return 0;
}