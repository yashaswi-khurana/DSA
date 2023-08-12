#include<iostream>
using namespace std;
int main()
{
int n = 3;
while (n!=0)
{
    if (n==1)
    {
        cout<<"True";   
        break;
    }
    else if(n%2!=0){
        cout<<"false";
        break;;
    }
    else if (n==2){
        cout<<"True";
        break;
    }
    
    else{
        n=n/2;
    }
}
return 0;
}

