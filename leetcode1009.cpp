// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

    // For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.

// Given an integer n, return its complement.

// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int k = n;
    int mask=0;
    while (k!=0){
        mask=(mask<<1)|1;
        k=k>>1;
    }
    int ans = (~n) & mask;
    cout<< ans<<endl;
return 0;
}