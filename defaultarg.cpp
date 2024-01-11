#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int size,int start = 0){
    //start = 0: default val 0 chli jaygi agr value ni di hui & def value hamesha right to lest hongi i.e agr rightmost def val hai tbhi hum right-1 attribute key value def dal sakenge.
    for (int i = start; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    int arr[5]={1,4,7,8,9};
    print(arr,5,2);
    print(arr,5);
return 0;
}