#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int start,int end,int key){
    int mid = start + ((end - start)/2);
    if (start>end)
    {
        return 0;
    }
    if (arr[mid]==key)
    {
        return 1;
    }
    if (arr[mid]>key)
    {
        int ans = binarySearch(arr,start,mid-1,key);
        return ans;
    }
    else
    {
        int ans = binarySearch(arr,mid+1,end,key);
        return ans;
    }
    
}
int main()
{
    int a[100] = {1,2,3,4};
    int size = 4;
    cout<<binarySearch(a,0,3,3)<<endl;
return 0;
}