#include <bits/stdc++.h>
using namespace std;
int min(int arr[],int size){
    int min_val = arr[0];
    for (int i=1;i<size;i++){
        if(arr[i] < min_val)
        min_val = arr[i];
    }
    return min_val;
}
int max(int arr[],int size){
    int max_val = arr[0];
    for (int i=1;i<size;i++){
        if(arr[i] > max_val)
        max_val = arr[i];
    }
    return max_val;
}
bool isPossible(int arr[], int size, int cows, int mid){
    int cowcount= 1;
    int lastpos = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]-lastpos>=mid)
        {
            cowcount++;
            if (cowcount==cows)
            {
                return true;
            }
            lastpos=arr[i];
        }
        
    }
    return false;
}
int Placement(int arr[],int size,int cows){
    // int n = sizeof(arr) / sizeof(arr[0]);
    // sort(arr, 5);
    int s = 0;
    int e = max(arr,size)-min(arr,size);
    int mid = s+(e-s)/2;
    int ans= -1;
    while (s<=e)
    {
        if (isPossible(arr,size,cows ,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    
    return ans;
}
int main()
{
    int arr[50]={1,2,3,4,6};
    cout<<Placement(arr,5,2)<<endl;
return 0;
}

// - EKO SPOJ: https://www.spoj.com/problems/EKO/  
// - PRATA SPOJ: https://bit.ly/3ExHXt5 