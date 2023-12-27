#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[],int size, int painter, int mid){
    int painter_number =1;
    int time = 0;
        for (int i = 0 ; i < size; i++)
    {
        if (time+arr[i]<=mid)
        {
            time+=arr[i];
        }
        else
        {
            painter_number++;
            if (painter_number>painter || arr[i]>mid)
            {
                return false;
            }
            time= arr[i];
        }
        
    }
    return true;
}
int painter(int arr[], int size, int painter){
    int sum = 0;
    int ans= -1;
    for (int i = 0; i <size; i++)
    {
        sum+=arr[i];
    }
    int s = 0;
    int e = sum;
    int mid = s+(e-s)/2;
    while (s<=e)
    {
        if (isPossible(arr,size,painter,mid))
        {   
            ans = mid;
            e = mid-1;
        }
        else
        {
            s=mid +1;
        }
        mid = s+(e-s)/2;
    }
    int sans =sum -ans;
    if ((sans)>ans)
    {
        return sans;
    }
    
    else
    {
        return ans;
    }
}
int main()
{
    int arr[50]={10,20,30,40};
    int size= 4;
    cout<< painter(arr,size,2)<<endl;
return 0;
}