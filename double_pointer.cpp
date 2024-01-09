#include <bits/stdc++.h>
using namespace std;
void update(int **p){
    // p=p+1;
    //Kuch Change hoga -NO

    // *p=*p+1;
    //Kuch Change hoga -Yes

    **p=**p+1;
    //Kuch Change hoga -Yes
}
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    // cout <<"Printing a: "<< a << endl;
    // cout <<"Printing Address of a: "<< &a << endl;
    // cout <<"Printing p: "<< p << endl;
    // cout <<"Printing Address of p: "<< &p << endl;
    // // cout << *p << endl;
    // // cout << q << endl;
    // // cout << &q << endl;
    // cout << *q << endl;
    // cout << **q << endl;

    cout<<endl;
    cout<<"Before "<<a<<endl;
    cout<<"Before "<<p<<endl;
    cout<<"Before "<<q<<endl;
    update(q);
    cout<<"After "<<a<<endl;
    cout<<"After "<<p<<endl;
    cout<<"After "<<q<<endl;
    cout<<endl;

return 0;
} 