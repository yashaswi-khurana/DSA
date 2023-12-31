#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;
    //min-heap
    priority_queue<int,vector<int>,greater<int>> mini;

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    cout<<"size-->"<<mini.size()<<endl;
    int n = mini.size();
    for (int i = 0; i <n; i++)
    {
        cout<<mini.top()<<" "<<endl;
        mini.pop();

    }cout<<endl;
    
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size-->"<<maxi.size()<<endl;
    int m = maxi.size();
    for (int i = 0; i <m; i++)
    {
        cout<<maxi.top()<<" "<<endl;
        maxi.pop();

    }cout<<endl;
    
    cout<<"Is Empty:"<<mini.empty()<<endl;
}