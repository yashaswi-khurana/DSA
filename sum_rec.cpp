#include <bits/stdc++.h>
using namespace std;
int sumr(int arr[],int size){
    if (size==0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    else
    {
        int remainingPart= sumr(arr+1,size-1);
        int sum = arr[0]+remainingPart;
        return sum;
    }
    
}
int main()
{
    int a[100] = {1,2,3,4};
    int size = 4;
    cout<<sumr(a,size)<<endl;
return 0;
}