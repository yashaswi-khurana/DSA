#include<iostream>
using namespace std;
int Binary_Search(int arr[],int size, int k){
    //Binary Search
    int start=0;
    int end=size-1;
    int mid = (start/2)+(end/2);
    while(start<=end){
        if (k==arr[mid]){
            return mid;
        }
        else if(k<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = (start/2)+(end/2);
    }
    return -1;
}
int first_postion(int arr[],int size, int k){
    //Left Most Element
    int left = Binary_Search(arr,size,k);
    if (left==-1)
    {
        return -1;
    }
    else{
    while (left>0 && arr[left]==k)
    {
        left=left-1;
    }
    return left+1;
    }
}
int last_postion(int arr[],int size, int k){
    //Right Most Element
    int right = Binary_Search(arr,size,k);
    if (right==-1)
    {
        return -1;
    }
    else{
    while (right>0 && arr[right]==k)
    {
        right=right+1;
    }
    return right-1;
    }
}
int main()
{
    int arr[8]={1,3,9,19,19,19,19,21};
    int ans_first=first_postion(arr,8,12);
    int ans_last=last_postion(arr,8,12);
    cout<<ans_first<<endl;
    cout<<ans_last<<endl;
return 0;
}