#include <bits/stdc++.h>
using namespace std;
void printing_an_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertion_sort(int arr[], int size){
    int i = 0;
    while (i<size)
    {
        int temp = arr[i];
        int k = i-1;
        while (k>=0 && arr[k]>temp)
        {
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=temp;
        i++;
    }
} 
// int insertion_sort(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         int temp =arr[i];
//         int j = i - 1;
//         for (int j = i-1; j>=0; j--)
//         {
//         if (arr[j]>temp)
//         {
//             arr[j+1]=arr[j];
//         }
//         else
//         {
//             break;
//         }
        
//         }
//         arr[j+1]=temp;
//     }
    
// }
int main()
{
    int arr[10] = {4,12,11,20};
    insertion_sort(arr,4);
    printing_an_array(arr,4);
return 0;
}
//Time complexity: O(n^2)
//Space complexity: O(1)
//Stable: Yes
//Inplace: Yes
//Adaptive: Yes
//Best case: O(n)