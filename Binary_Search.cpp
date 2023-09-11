#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    while(start<=end){
        int mid = (start/2)+(end/2);
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int index = binarysearch(even,6,12);
    cout<<"Value of index at which 13 is present: "<<index<< endl;
return 0;
}