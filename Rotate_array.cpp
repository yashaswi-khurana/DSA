#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v){
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
}
vector<int> rotate(vector<int> v,int k){
    vector <int> temp(v.size());
    for (int i = 0; i <v.size(); i++)
    {
        temp[(i+k)%v.size()]=v[i];
    }
    return temp;
}
int main()
{
    vector <int> v ={1,2,3,4,5};
    print(rotate(v,2));
return 0;
}