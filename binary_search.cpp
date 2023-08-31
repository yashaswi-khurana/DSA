#include<iostream>
using namespace std;
int binary_search(int arr[],int size){
    int data;
    cout<<"Please enter required value: ";
    cin>>data;
    int first = arr[0];
    int last = arr[size-1];
    int mid = (first+last)/2;
    while (first<=last)
    {
        if (arr[mid]<data)
        {
            first = mid+1;
        }
        else if (arr[mid]==data)
        {
            cout<<"Value found at index: "<<mid<<endl;
            break;
        }
        else
        {
            last = mid-1;
        }
        mid = (first+last)/2;
    }
    if (first>last)
    {
        cout<<"Value not found"<<endl;
    }
    return 0;


}
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    binary_search(array,10);
return 0;
}