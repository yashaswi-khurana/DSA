#include<iostream>
using namespace std;
void insertion(int arr[], int num,int index,int n){

for (int i = n-1; i >=index; i--) {
        arr[i+1]=arr[i];
    }
arr[index]= num;
}
int main(){
    cout<<"enter size:"<<endl;
    int n;
    int arr[100];
    cin>>n;
    cout<<"enter array:"<<endl;
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}
cout<<"enter number that is to be added:"<<endl;
int num;
cin>>num;
cout<<"enter index at which it is to be added:"<<endl;
int index;
cin>>index;
insertion(arr,num,index,n);
for (int i = 0; i <n; i++)
{
   cout<<arr[i];
}
return 0;
}