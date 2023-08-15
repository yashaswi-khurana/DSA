// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Input: x = 123
// Output: 321


#include<iostream>
using namespace std;
int main()
{
        int n=-123;
    int rev= 0;
    while (n!=0)
    {
        int temp=n%10;
        rev = rev*10 + temp;
        n/=10;
    }
    cout<<rev<<endl;
return 0;
}