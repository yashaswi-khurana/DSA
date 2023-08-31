#include<iostream>
using namespace std;

//ye wala function sirf int array uthayega
void printArray(int arr[],int size)
{
    cout<<"Printing the array"<<endl;
    //Print the array
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing done"<<endl;
}

//To find maximum value in an array
void maximum(int array[],int size)
{
    int max=array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        else
        {
            continue;
        }
        
    }
    cout<<"Maximum value in array is: "<<max<<endl;
}
//To find minimum value in an array
void minimum(int array[],int size)
{
    int min=array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
        }
        else
        {
            continue;
        }
        
    }
    cout<<"Minimum value in array is: "<<min<<endl;
}
int main()
{   //declare
    // int third[12]={5,6,10,5,8};
    // printArray(third,12);


    // int ninth[6]={6,6,5,5,6,9};
    // printArray(ninth,5);

    // int size=sizeof(third);
    // cout<<size<<endl;

    // int size1=sizeof(ninth);
    // cout<<size1<<endl;

    // char ch[5]={'a','b','c','r','p'};
    // cout<<ch[1]<<endl;

    // cout<<"Everything is fine"<<endl;

    int arr[5]={1,4,9,7,0};
    maximum(arr,5);
    minimum(arr,5);
return 0;
}