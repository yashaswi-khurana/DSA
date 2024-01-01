#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector <int> m, vector<int> n){
    vector <int> v;
    int i=0,j=0;
    while (i<m.size() && j<n.size())
    {
        if (m[i]<n[j])
        {
            v.push_back(m[i]);
            i++;
        }
        else
        {
            v.push_back(n[j]);
            j++;
        }
    }
    while (i<m.size())
    {
        v.push_back(m[i]);
        i++;
    }
    while (j<n.size())
    {
        v.push_back(n[j]);
        j++;
    }
    return v;

}
void print(vector<int> v){
    for (int k:v)
    {
        cout<<k<<" ";
    }
    cout<<endl;
}
int main()
{
    vector <int> m={1,3,5,7};
    vector <int> n={2,4,6,8};
    print(merge(m,n));
return 0;
}