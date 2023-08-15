#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"n is "<<n<<endl;
    }
int main()
{
    int n;
    cin>>n;
    dummy(n);//jb ye vala n gaya ek trh se copy ban gi n ki original n pe koi effect ni hoga
    cout<<"number n is "<<n<<endl;//n ki value 15 hi rahegi.
return 0;
}