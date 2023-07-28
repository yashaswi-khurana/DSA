#include<iostream>
using namespace std;
int main()
{

//Bitwise operator
//     int a = 4;
//     int b = 6;
//     cout << "a&b " << (a&b) << endl;
//     cout << "a|b " << (a|b) << endl;
//     cout << "a^b " << (a^b) << endl;
//     cout << "~a " << (~a) << endl;

// cout<<"17>>1 "<<(17>>1)<<endl;
// cout<<"17>>2 "<<(17>>2)<<endl;
// cout<<"21<<1 "<<(19<<1)<<endl;
// cout<<"21<<2 "<<(19<<2)<<endl;

//i=i+1 can also be written as i++
//i=i-1 can also be written as i--
//i=i+2 can also be written as i+=2
//i=i-2 can also be written as i-=2
// i++ is also called post increment
// i-- is also called post decrement
// ++i is also called pre-increment 
// --i is also called pre-decrement 

// int i=7;
// cout<< (++i)<<endl;//8
// cout<< (i++)<<endl;//8
// cout<< (--i)<<endl;//8
// cout<< (i--)<<endl;//8
// cout<< (i)<<endl;//7

// int a,b=1;
// a=10;
// if (++a)
// {
//     cout<<b<<endl;
// }
// else
// {
//     cout<<++b<<endl;
// }

// int a = 1;
// int b = 2;

// if (a-- > 0 && ++b > 2)
// {
//     cout << "Stage1 - Inside If ";
// }
// else
// {
//     cout << "Stage2 - Inside else ";
// }
// cout<<a<<" "<<b<<endl;

// int number = 3;
// cout<<(25*(++number));

// int a = 1;
// int b = a++;
// int c = ++a;
// cout<<b<<endl;
// cout<<c<<endl;

// for loops
// int n;
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     cout<<i<<endl;
// }
// int i =1;
// for (; i <= n; i++)
// {
//     cout<<i<<endl;
// }
// int i =1;
// for (; i <= n;)
// {
//     cout<<i<<endl;
//     i++;
// }

// for (;;)
// {
//     if (i<=n)   
//     {
//         cout<<i<<endl;
//     }
//     else{
//         break;
//     }i++;
// }

// for (int a=0,b=9; a<=9 && b>=0; a++,b--)
// {
//     cout<<a<<b<<endl;
// }
// int n;
// cin>>n;
// int m = 0;
// for (int i = 0; i <= n; i++)
// {
//     m+=i;
// }
// cout<<m<<endl;
// int k = 1;
// cout<< m <<" "<<k<<" ";
// for (int i = 0; i <=n; i++)
// {
//     int nextnum=m+k;
//     cout<<nextnum<<" ";
//     m = k;
//     k = nextnum;
// }
// bool isprime=1;
// for (int i = 2; i < n; i++)
// {
//     if (n%i==0)
//     {
//         isprime=0;       
//         break;
//     }
// }
// if (isprime==0)
// {
//     cout<<"Not a prime number"<<endl;
// }
// else
// {
//     cout<<"Is a prime number"<<endl;
// }

//continue--> skipping an iteration
//odd numbers till n
// for (int i = 1; i <=n; i++)
// {
//     if (i%2==0)
//     {
//         continue;
//     }
//     else{
//         cout<<i<<endl;
//     }
// }

//variables and scope

int a = 3;//global variable
cout<<a<<endl;
if (true){
    int a = 5;//local variable
    cout<<a<<endl;
    int b = 9;
}
cout<<a<<endl;
// cout <<b<<endl; local variable cannot be acssesed outside the block
return 0;


}