#include <bits/stdc++.h>
using namespace std;
int linearSearch (int arr[],int size,int key){
    if (size==0)
    {
        return 0;
    }
    if (arr[0]==key)
    {
        return 1;
    }
    else
    {
        int ans = linearSearch(arr+1,size-1,key);
        return ans;
    }
    // return 0;
}
int main()
{
    int arr[100]={1,2,3,4,5,110};
    int size = 6;
    int key = 110 ;
    cout<<linearSearch(arr,size,key)<<endl;
return 0;
}