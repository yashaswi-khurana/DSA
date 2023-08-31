#include<iostream>
using namespace std;
void sum_of_elements(int arr[],int size){
    cout<<"Your array is: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Sum of elements in the array is: ";
    int sum =0 ;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];}
    cout<<sum<<endl;
}
int main()
{
    int array[5]={4,3,2,8,6};
    sum_of_elements(array,5);
return 0;
}