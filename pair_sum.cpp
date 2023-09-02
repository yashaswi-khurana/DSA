#include<iostream>
using namespace std;
//Strictly Increasing
// void pair_sum(int arr[], int size, int value){
//     int i,j;
//     i=0;
//     j=0;
//     while (i<size && j<size)
//     {
//         if (arr[i]+arr[j]==value)
//         {
//             cout<<"The pair is: "<<arr[i]<<" "<<arr[j]<<endl;
//             i++;
//             j=i+1;
//         }
//         else 
//         {
//             if (j==size)
//             {
//                 i++;
//                 j=0;
//             }
//             else
//             {
//                 j++;
//             }
            
//         }
//     }
// }

void pair_sum(int arr[], int size, int value){
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if (arr[i]+arr[j]==value)
            {
                cout<<"The pair is: "<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    pair_sum(arr,10,7);
return 0;
}