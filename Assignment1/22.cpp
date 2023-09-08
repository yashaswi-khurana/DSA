#include<iostream>
using namespace std;
void deletion(int arr[],int index,int n){

for (int i = n-1; i >=index; i--) {
        arr[i]= arr[i+1];
    }

n--;
}
int main(){
    int n;
    int arr[100];
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<"enter array"<<endl;
for (int i = 0; i < n; i++)
{
cin>>arr[i];
}


int index;
cout<<"enter index you want to delete"<<endl;
cin>>index;
deletion(arr,index,n);
for (int i = 0; i <n-1; i++)
{
cout<<arr[i];
}
return 0;
}