#include <bits/stdc++.h>
using namespace std;
// long int rev(int x){
//     long int rev_int = 0;
//     while (x!=0)
//     {
//         int temp=0;
//         temp = x % 10;
//         rev_int = rev_int*10 + temp;
//         x = x/10;
//     }
//     return rev_int;
// }
bool isPalindrome(int& x){
    if (x <0 or (x!=0 and x%10==0))
    {
        return false;
    }
    else
    {
        int half = 0;
        while (x>half)
        {
            half = half*10 + x%10;
            x = x/10;
        }
        return (x==half or x==half/10);
    
    }
}
// }
// bool isPalindrome(int& x){
//     int rev_int = rev(x);
//     if (rev_int < 0){
//         return false;
//     }
//     else if (rev_int==x)
//     {
//         return true;
//     }
    
//     else
//     {
//         return false;
//     }
// }
int main()
{
    int x = 121;
    cout<<isPalindrome(x)<<endl;
    // cout<<rev(x)<<endl;
return 0;
}