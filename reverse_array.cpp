#include <bits/stdc++.h>
using namespace std;
void reverse_array(vector<int> v){
    int n = v.size();
    for (int i = 0; i < n/2; i++)
    {
        swap(v[i],v[n-i-1]);
    }
    for (int k:v)
    {
        cout<<k<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> k = {1,2,3,4,5};
    reverse_array(k);
return 0;
}