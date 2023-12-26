#include <bits/stdc++.h>
using namespace std;
int finding_a_pivot(int arr[],int size){
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        
        mid = s+(e-s)/2;
    }
    return arr[s];
}

int main()
{
    int arr[100] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int size = 9;
    int ans = finding_a_pivot(arr,size);
    cout<<ans<<endl;
return 0;
}