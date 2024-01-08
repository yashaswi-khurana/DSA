#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num =5;
    // cout<<num<<endl;
    //address of Operator-&
    // cout<<"Address of num is: "<<&num<<endl;
    //pointer variable = store address 
    // int *p = &num;
    // cout<<"Address of p is: "<<p<<endl;
    // cout<<"value at p is: "<<*p<<endl;

    // double d = 4.3;
    // double *q = &d;
    // cout<<"Address of q is: "<<q<<endl;
    // cout<<"value at q is: "<<*q<<endl;
    // cout<<"size at q is: "<<sizeof(*q)<<endl;
    // cout<<"size of q is: "<<sizeof(q)<<endl;

    //pointer ka size is 8

    //pointer to int is created, and  pointing to some garbage address;
    // int *r;
    // cout<<"value of r is: "<<*r<<endl;// bad practice never do it

    //re assigning the value
    // int i =5;
    // int *j =0;
    // j = &i;
    // cout<<"Address of j is: "<<j<<endl;
    // cout<<"value at j is: "<<*j<<endl;

    // int n =5;
    // int a = num;

    // cout<<"a before "<<a<<endl;
    // cout<<"num before "<<num<<endl;
    // // a++;
    // num++;
    // cout<<"num after "<<num<<endl;

    // int *p = &num;
    // cout<<"p before "<<*p<<endl;
    // (*p)++;
    // cout<<"p after "<<*p<<endl;

    //Copying the address
    // int *q= p;
    // cout<<p<< " - "<< q <<endl;
    // cout<<*p<< " - "<< *q <<endl;
    // (*p)++;
    // cout<<*q<<endl;

    int i = 3;
    int *j = &i;
    // cout<<(*j)++<<endl;
    cout<<(j)++<<endl;
    cout<<j<<endl;
    cout<<*j<<endl;

return 0;
}