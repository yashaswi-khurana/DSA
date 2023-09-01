#include<iostream>
using namespace std;
void printing_an_array(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insertion_in_array(int arr[],int size,int element,int index){
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    size++;
    printing_an_array(arr,size);
}
void deletion_in_array(int arr[],int size,int index){
    cout<<"Index you want to delete at:";
    cin>>index;
    for (int i = index; i < size; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    printing_an_array(arr,size);
}

int main()
{
    int arr[1000];
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int element,index;
    cout<<"Enter the element you want to insert: ";
    cin>>element;
    cout<<"Enter the index at which you want to insert: ";
    cin>>index;
    insertion_in_array(arr,size,element,index);
    // deletion_in_array(arr,size,index);
return 0;
}