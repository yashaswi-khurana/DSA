// #include<iostream>
// using namespace std;
// void reverse_array(int array[],int size){
//     int k = size;
//     int new_arr[k];
    
//     for (int i = 0; i < size; i++)
//     {
//         new_arr[i]=array[k-1];
//         k--;
//     }
//     cout<<"The Reversed array is: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout<<new_arr[i]<< " ";
//     }
    
// }
// int main()
// {
//     int array[5]={1,2,3,4,5};
//     reverse_array(array,5);
// return 0;
// }


#include<iostream>
using namespace std;
void printArray(int array[],int size){
    cout<<"Printing the array"<<endl;
    //Print the array
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing done"<<endl;
}

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={2,6,3,9,4};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);
return 0;
}