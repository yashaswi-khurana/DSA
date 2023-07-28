#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin>>n;
    // while (i<=n)    
    // {
    // int j = 1;
    //     while (j<=n)
    //     {   
    //         cout<<j;
    //         cout<<n-j+1;
    //         j++;
    //     }cout<<endl;
    //     i++;
    // }


    // int count=1;
    // while (i<=n)    
    // {    
    //     int j=1;
    //     while (j<=n)
    //     {   cout<<count;
    //     count+=1;
    //         j++;
    //     }cout<<endl;
    //     i++;
    // }
    

    // while (i<=n)    
    // {   int j = 1;
    //     while (j<=i)
    //     {
    //         // cout<<'#';
    //         cout<<i;
    //         j++;
    //     }cout<<endl;
    //     i++;
        
    // }
    
    // int count = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<count<<" ";
    //         count=count+1;
    //         j++;
    //     }cout<<endl;
    //     i++;
    // }


    // while (i<=n)
    // {
    //     int j = 1;
    //     int val = i;
    //     while (j<=i)    
    //     {
    //         cout<<val;
    //         val++;
    //         j++;
    //     }cout<<endl;
    //     i++;
    // }

    // while (i<=n)
    // {
    //     int j=1;
    //     int val = i;
    //     while (j<=i)
    //     {
    //         cout<<val;
    //         val--;
    //         j++;
    //     }cout<<endl;
    //     i++;

    // }

    // while (i<=n)
    // {
    //     int j = 0;
    //     while (j<n)
    //     {
    //         char  ch = 'A'+j;
    //         cout<<ch;
    //         // ch++;
    //         j++;
    //     }cout<<endl;
    //     i++;
        
    // }
    
            char ch = 'A';
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {

            cout<<ch<<" ";
            ch=ch+1;
            j++;
        }cout<<endl;
        i++;
    }
    
    
return 0;
}