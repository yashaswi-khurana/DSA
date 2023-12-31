#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_front(20);
    
    for (int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());

    cout<<"after erase"<<endl;

    for (int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of list: "<<l.size()<<endl;

    list <int> n(5,100);

    for (int i:n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}