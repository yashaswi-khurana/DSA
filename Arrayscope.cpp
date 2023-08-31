#include<iostream>
using namespace std;
void update(int arr[],int n){
    cout<<endl<<"Inside the function"<<endl;
    
    //updating an array
    arr[0]=120;
    
    //printing an array
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"going back to the main function"<<endl;
}
int main()
{
    int arr[3]={1,2,3};
    update(arr, 3);

    //Printing the array
    cout<<endl<<"Printing the main function "<<endl;
    for (int  i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}