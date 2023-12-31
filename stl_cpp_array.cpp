#include <iostream>
#include <array>
using namespace std;
int main()
{
    // Creating an array using stl
    array<int,4>a={1,2,3,4};
    int size =a.size();
    cout<<"Size of array is "<<size<<endl;
    cout<<"Elements of array are "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    cout<<"Element at 2nd index is "<<a.at(2)<<endl;
    cout<<"Front element is "<<a.front()<<endl;
    cout<<"Back element is "<<a.back()<<endl;
    
return 0;
}