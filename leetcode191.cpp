#include<iostream>
using namespace std;
int main()
{
    int n=00000000000000000000000000001101;
    int count=0;
    while (n!=0)
    {
        if (n&1)
        {
            count++;
        }
        n=n>>1;
    }
    cout<<count<<endl;
    

return 0;
}