#include <bits/stdc++.h>
using namespace std;
void print(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
vector<int> rev(vector<int> arr, int m){
    int size = arr.size();
    int s=m;
    int e = size-1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}
int main()
{
    vector<int> arr ={1,2,3,4,5,6,7,8,9};
    print(rev(arr,4));

return 0;
}