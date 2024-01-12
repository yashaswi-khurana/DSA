#include <bits/stdc++.h>
using namespace std;
// int factorial(int n)
// {   //base case
//     if (n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n*factorial(n-1);
//     }
    
// }
// int power(int n){
//     if (n==0) return 1;
//     else return 2*power(n-1);
// }
void counting(int n){
    if (n==0) {return ;}
    counting(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    // cout<<factorial(n)<<endl;
    // cout<<power(n)<<endl;
    counting(n);
return 0;
}