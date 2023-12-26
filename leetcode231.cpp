// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x

// Input: n = 1
// Output: true
// Explanation: 20 = 1

#include <bits/stdc++.h>
using namespace std;
int main()
{
int n = 3;
// while (n!=0)
// {
//     if (n==1)
//     {
//         cout<<"True";   
//         break;
//     }
//     else if(n%2!=0){
//         cout<<"false";
//         break;;
//     }
//     else if (n==2){
//         cout<<"True";
//         break;
//     }
    
//     else{
//         n=n/2;
//     }
// }

for ( int i = 0;i<=30;i++){
            int ans = pow(2,i);
            if (ans == n)
            {
                return true;
            }
        }
        return false;
return 0;
}

