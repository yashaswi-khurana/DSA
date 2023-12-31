#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque <int> d;
    deque <int> a(5,1);
    d.push_back(1);
    cout<<"size-->"<<d.size()<<endl;  
    d.push_front(2);
    for (int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    d.push_back(2);

    cout<<"Empty or not: "<<a.empty()<<endl;
    
    cout<<"Element at 1st Index: "<<d.at(1)<<endl;
    cout<<"Element at 1st Index: "<<d[1]<<endl;
    cout<<"Front Element: "<<d.front()<<endl;
    cout<<"Last Element: "<<d.back()<<endl;

    d.pop_back();

    d.erase(d.begin(),d.begin()+1);
    cout<<"size-->"<<d.size()<<endl;

    for (int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //d.assign(3,4);//Assigns the value 4 to first three elements of the deque

    return 0;

}