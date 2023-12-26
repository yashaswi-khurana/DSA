#include <bits/stdc++.h>
using namespace std;
int pivot(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    int lsum=0;
    for(int i=0;i<size;i++){
    lsum+=arr[i];
    int ksum=sum-lsum;
    if(lsum-arr[i]==ksum){
    return i;
    }}
    return -1;
}

int main()
{
    int arr[100]={2,1,-1};
    int h = pivot(arr,3);
    cout<<h<<endl;
return 0;
}