#include <bits/stdc++.h>
using namespace std;
void printing_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selection_sort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        int min_index = i;
        for (int j = i+1; j < size; j++)
        {
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
        
    }
}
// void selection_sort(int arr[],int size){
//     for (int i = 0; i < size-1; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//             if(arr[j]<arr[i]){
//                 swap(arr[i],arr[j]);
//             }
//         }
        
        
//     }
// }
int main()
{
    int arr[50]={1,7,9,2,3,0,4,6};
    int size=8;
    selection_sort(arr,size);
    printing_array(arr,size); 
return 0;
}
//Time Complexity
// Best Case: O(n^2)
// Average Case: O(n^2)
// Worst Case: O(n^2)
//Space Complexity: O(1)
//Stability: Unstable