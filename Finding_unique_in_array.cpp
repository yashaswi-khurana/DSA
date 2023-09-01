#include<iostream>
using namespace std;
int unique(int arr[],int size){
    int xorsum=0;
    for(int i=0;i<size;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int main()
{
    int arr[5]={1,2,6,2,1};
    cout<<unique(arr,5)<<endl;
return 0;
}