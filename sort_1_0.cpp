#include <bits/stdc++.h>

using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort_0_1(int arr[],int size){
    int left=0,right=size-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        if(left<right){
            arr[left]=0;
            arr[right]=1;
            left++;
            right--;
        }
    }
    printarray(arr,size);
}
int main()
{
    int arr[100]={0,0,0,0,1,1,0,0};
    int size=8;
    sort_0_1(arr,size);
return 0;
}