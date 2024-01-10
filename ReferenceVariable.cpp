#include <bits/stdc++.h>
using namespace std;
void update(int n){
    n++;
}
void update2(int&n)
{
    n++;
} 
int main()
{
    int i = 5;

    //create a ref variable

    // int& j = i;
    // cout << "Value of i is :" << i << endl;
    // i++;
    // cout << "Value of j is :" << j << endl;
    // j++;
    // cout << "Value of i is :" << i << endl;
    // cout << "Value of j is :" << j << endl;

    cout<<"Before "<<i<<endl;
    update(i);
    cout<<"After "<<i<<endl;
    
    cout<<"Before "<<i<<endl;
    update2(i);
    cout<<"After "<<i<<endl;

return 0;
}