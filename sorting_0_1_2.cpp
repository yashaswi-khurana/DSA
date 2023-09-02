#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort_0_1_2(int arr[],int size){
    int left = 0;
    int right = size-1;
    int mover = 0;
    while (mover<=right)
    {
        if (arr[mover]==0)
        {
            swap(arr[mover],arr[left]);
            mover++;
            left++;
        }
        else if (arr[mover]==1)
        {
            mover++;
        }
        else
        {
            swap(arr[mover],arr[right]);
            right--;
        }
        
    print(arr,size);
    }
}
int main()
{
    int arr[100]={0,1,1,2,0,1,0,2};
    int size=8;
    sort_0_1_2(arr,size);
return 0;
}