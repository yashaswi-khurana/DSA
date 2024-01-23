#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s+1; i <=e; i++)
    {
        if (arr[i]<=pivot)
        {
            cnt++;
        }
        
    }
    
    int PivotIndex = s + cnt;
    swap (arr[PivotIndex],arr[s]);

    int i =s, j = e;
    while (i<PivotIndex && j>PivotIndex)
    {
        while (arr[i]<pivot)
        {
            i++;
        }
        
        while (arr[j]>pivot)
        {
            j--;
        }
        if (i<PivotIndex && j>PivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
        
    }
    return PivotIndex;
}
void quickSort(int arr[],int s,int e){
    //Base Case
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);
}
int main()
{
    int arr[5]={2,4,1,6,9};
    int n = 5;

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
return 0;
}