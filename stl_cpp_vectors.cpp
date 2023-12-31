#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    vector <int> a(5,1);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"size-->"<<v.size()<<endl;    
    
    v.push_back(2);
    cout<<"size-->"<<v.size()<<endl;
    cout<<"Capacity-->"<<v.capacity()<<endl;

    cout<<"Element at 1st Index: "<<v.at(1)<<endl;
    cout<<"Element at 1st Index: "<<v[1]<<endl;
    cout<<"Front Element: "<<v.front()<<endl;
    cout<<"Last Element: "<<v.back()<<endl;

    v.pop_back();

    for (int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //v.assign(3,4);//Assigns the value 4 to first three elements of the vector

    return 0;

}
