#include <bits/stdc++.h>
using namespace std;
int peak(int arr[],int size){
    int s=0;
    int e = size-1;
    int mid = s+(e-s)/2;
    while (s<=e)
    {
        if (arr[mid+1]>arr[mid])
        {
            s=mid+1;
        }
        else if (arr[mid-1]>arr[mid])
        {
            e=mid-1;
        }
        else
        {
            return arr[mid];
        }
        mid=s+(e-s)/2;
    }
    return arr[mid];
}
int main(){
    int arr[100] = {0,9,11,4};
    int k = peak(arr,4);
    cout<<k<<endl;
    return 0;
}
