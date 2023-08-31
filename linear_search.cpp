#include<iostream>
using namespace std;
int search(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {   
            cout<<"Element present at: "<<i<<endl;
            return 1;
        }
    }
    return 0;
    
}

int main()
{
    int arr[10]={5,6,7,-5,10,11,0,9,3,10};
    cout<<"Enter the value you want to find: "<<endl;
    int key;
    cin>>key;

    //whether 1 is present in in or not?
    bool result =search(arr,10,key);
    if (result==1)
    {
        cout<<"Element is present in the array"<<endl;
    }
    else
    {
        cout<<"Element is not present in the array"<<endl;
    }
    
return 0;
}