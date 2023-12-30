#include <bits/stdc++.h>
using namespace std;
void printing_an_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubble_sort(int arr[],int size){
    bool swapped = false;
    for (int k = 1; k < size; k++)
    {
    for (int i = 0; i < size - k; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
            swapped = true;
        }
        if (swapped==false)
        {
            break;
        }
        
    }
    }
}
int main()
{
    int arr[10]={10,1,7,6,14,9};
    int n=6;
    bubble_sort(arr,n);
    printing_an_array(arr,n);
return 0;
}
//This program is to sort an array using the Bubble Sort algorithm.
//Time Complexity: O(n^2)
//Space Complexity: O(1)
//Best case O(n)
//stability:stable