#include <bits/stdc++.h>
using namespace std;
int getsum(int *arr,int n){
    int sum = 0;
    for (int i = 0; i < n ;i++)
    {
        sum += arr[i];
    }
    return sum;

}
int main()
{
    // char ch = 'q';
    // cout<<sizeof(ch)<<endl;

    // char *p=&ch;
    // cout<<sizeof(p)<<endl;
    int n;
    cin>>n;

    //variable size array
    int* arr = new int[n];

    //taking input in array
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    int ans = getsum(arr,n);
    cout<<ans<<endl;

    //case 1
    while (true)
    {
        int i =5;
    }//automaticaly frees up the memory
    
    //case2
    while (true)
    {
        int *p = new int;
        // delete p;
    }//memory gets piled up
    // use delete keyword to heap memory 
return 0;
}