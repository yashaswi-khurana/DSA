#include <bits/stdc++.h>
using namespace std;
int first_occurance(int arr[],int size, int key){
    int first = 0;
    int last = size-1;
    int mid = (first/2)+(last/2);
    int ans = -1;
    while (first<=last)
    {
        if (arr[mid]== key)
        {
            ans = mid;
            last = mid-1;
        }
        else if (arr[mid]>key)
        {
            last = mid-1;
        }
        else
        {
            first = mid+1;
        }
        mid=(first/2)+(last/2);
    }
    return ans;
}
int last_occurance(int arr[],int size, int key){
    int first = 0;
    int last = size-1;
    int mid = (first/2)+(last/2);
    int ans = -1;
    while (first<=last)
    {
        if (arr[mid]== key)
        {
            ans = mid;
            first= mid+1;
        }
        else if (arr[mid]>key)
        {
            last = mid-1;
        }
        else
        {
            first = mid+1;
        }
        mid=(first/2)+(last/2);
    }
    return ans;
}


int main()
{
    int arr[1000] = {1,2,3,6,6,6,7};
    int s = first_occurance(arr,7,6);
    int k = last_occurance(arr,7,6);
    int number=k-s+1;
    cout<<"Number of occurances: "<<number<<endl;
return 0;
}