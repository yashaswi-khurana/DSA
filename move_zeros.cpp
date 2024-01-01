#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v){
    for (int k:v)
    {
        cout<<k<<" ";
    }
    cout<<endl;
}
vector<int> move(vector<int> v){
    int i = 0;
    for (int j = 0; j < v.size(); j++)
    {
        if(v[j]!=0){
            swap(v[i],v[j]);
            i++;
        
        }
    }
    
    return v;
}
int main()
{
    vector <int> v = {2,0,1,0,0,3,0};
    print(move(v));
return 0;
}