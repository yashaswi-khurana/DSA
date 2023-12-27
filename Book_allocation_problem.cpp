#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int n, int m,int mid){
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0 ; i < n; i++)
    {
        if (pagesum+arr[i]<=mid)
        {
            pagesum+=arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount>m || arr[i]>mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
        
    }
    return true;
}
int solution(int arr[],int n, int m){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int s = 0;
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (isPossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid +1;
        }
        mid = s + (e-s)/2;
            
        }
        return ans;
    }
int main()
{
    int arr[50]={10,20,30,40};
    int n=4;
    int m=2;
    cout<<solution(arr,n,m)<<endl;
return 0;
}