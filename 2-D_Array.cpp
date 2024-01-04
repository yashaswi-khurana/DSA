#include <bits/stdc++.h>
using namespace std;
void rowSum(int arr[][3]){
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum+=arr[i][j];
        }
        cout<<"Sum of row "<<i<<" is "<<sum<<endl;
    }
}
bool isPresent(int arr[][4],int target,int row,int col){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if(arr[row][col]==target){
                return 1;
            }
        }
        
    }
    
}
int main()
{
    //Linear Array
    int arr[10];
    //2-D Array
    //int arr[row][col]
    int arr2[10][10];
    //taking input
    //cin>>arr[i][j]
    //printing output
    //cout<<arr[i][j]
    int ar[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin>>ar[i][j];
    //     }
        
    // }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Enter the element to search "<<endl;
    int target;
    cin>>target;
    bool found = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <4; j++)
        {
            if(ar[i][j]==target){
                cout<<"Element found at "<<i<<" "<<j<<endl;
                found = true;
            }
        }
        
    }
return 0;
}