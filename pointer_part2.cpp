#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[10]={2,5,60};
    // cout<<"Address of first memory block is: "<<arr<<endl;
    // cout<<"Address of first memory block is: "<<&arr[0]<<endl;
    // cout<<"Address of second memory block is: "<<&arr[1]<<endl;
    // cout<<"1st block element :"<<*arr<<endl;
    // cout<<"1st block element :"<<*(arr+1)<<endl;
    // cout<<"1st block element :"<<*(arr+2)<<endl;
    // cout<<"1st block element :"<<*(2+arr)<<endl;

    // int *p = &arr[0];
    // cout<<p<<endl;
    
    /*
    int temp[10];
    cout<<sizeof(temp)<<endl;

    int *p = &temp[0];
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(&p)<<endl;
    
    int a[20]={1,2,3,5};
    cout<<" "<<&a[0]<<endl;
    cout<<" "<<a<<endl;
    cout<<" "<<*a<<endl;

    int *p = &a[0];
    cout<<" "<<&p[0]<<endl;
    cout<<" "<<p<<endl;
    cout<<" "<<*p<<endl;
    

    int arr[10];
    //Error
    // arr=arr+1;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=&a[0];
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;
    */


    // **CHAR ARRAY**
    int arr[10]={1,2,3,4};
    char ch[10]="abcde";
    // Attention
    cout<<arr<<endl;
    cout<<ch<<endl;

    char *p = &ch[0];
    //Prints entire string
    cout<<p<<endl;

    char temp = 'z';
    char *c = &temp;

    cout<<c<<endl;
return 0;
}