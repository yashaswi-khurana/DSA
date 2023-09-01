#include<iostream>
using namespace std;
void find_duplicate(int arr[],int size){
int ans =0;
for (int i = 0; i < size; i++)
{
    ans=ans^arr[i];
}
for (int i = 1; i < size; i++)
{
    ans=ans^i;
}
    cout<<ans<<endl ;
}
int main()
{
    int arr[10]={1,2,4,3,4};
    int size=5;
    find_duplicate(arr,size);
return 0;
}