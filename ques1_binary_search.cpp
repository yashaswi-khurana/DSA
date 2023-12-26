#include<iostream>
using namespace std;
int left(int arr[],int size,int k){
    int s = 0;
    int e = size-1;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    mid = s+(e-s)/2;
    }
    return ans;
}
int right(int arr[],int size,int k){
    int s = 0;
    int e = size-1;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int num_of_occurrence(int arr[],int size,int k){
    int l = left(arr,size,k);
    int r = right(arr,size,k);
    return r-l+1;
}
int main(){
    int arr[100]={1,2,3,3,5};
    int size = 5;
    int k = 3;
    int ans = num_of_occurrence(arr,size,k);
    cout<<ans<<endl;
}