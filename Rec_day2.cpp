#include <bits/stdc++.h>
using namespace std;
void reachHome(int src,int dest){
    //Base case
    cout<<src<<endl;
    if (src==dest)
    {
        cout<<"reached home"<<endl;
        return;
    }
    //recursive call
    reachHome(src+1,dest);
}
int main()
{
    int dest = 10;
    int src = 1;
    reachHome(src,dest);
return 0;
}