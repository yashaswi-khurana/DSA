#include <bits/stdc++.h>
using namespace std;
bool isSorted(int a[],int size){
    //Base Case
    if (size==0 || size==1){
        return true;
    } 

    if (a[0]>a[1])
    {
        return false;
    }
    else
    {
        bool ans = isSorted(a+1,size-1);
        return ans;
    }
    
}
int main()
{
    int a[100] = {1,2,81 ,40};
    int size = 4;
    cout<<isSorted(a,size)<<endl;
return 0;
}