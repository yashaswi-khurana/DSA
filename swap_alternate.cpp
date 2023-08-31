#include<iostream>
using namespace std;
void swap_alternate(int arr[],int size)
{
    //Condition for alternate swapping if size is an even no.
    if (size%2==0)
    {
        for (int i = 0; i < size; i=i+2)
        {
            // int temp;
            // temp=arr[i];
            // arr[i]=arr[i+1];
            // arr[i+1]=temp;

            // alternate
            swap(arr[i],arr[i+1]);
        }
        
    }
    
    
    //Condition for alternate swapping if size is an odd no.
    else
    {   int last = arr[size-1];
        for (int i = 0; i < size; i=i+2)
        {
            // int temp;
            // temp=arr[i];
            // arr[i]=arr[i+1];
            // arr[i+1]=temp;

            //alternate
            swap(arr[i],arr[i+1]);
        }
        arr[size-1]=last;
    }
    
    
    //Printing an array
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main()
{   //Array initialisation
    int arr[9]={1,2,3,4,5,6,7,8,9};
    swap_alternate(arr,9);
return 0;
}