#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v){
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
}
vector<int> un_rotate(vector<int> v){
    vector<int> temp;
    vector<int> out;
    int i = 0;
    while (v[i]<v[i+1])
    {
        temp.push_back(v[i]);
        i++;
    }
    temp.push_back(v[i]);
    for (int i = temp.size(); i < v.size(); i++)
    {
        out.push_back(v[i]);
    }
    for (int i = 0; i < temp.size(); i++)
    {
        out.push_back(temp[i]);
    }
    return out;
}
bool if_sorted(vector <int> o){
    int i = 0;
    while (o[i]<o[i+1])
    {
        i++;
        
    }
        if (i == o.size()-1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    
}

bool check(vector<int> v){
    int count = 0;
    int n=v.size();

    for (int i = 1; i < n; i++)
    {
        if (v[i-1]>v[i])
        {
            count++;
        }
        
    }
    if (v[n-1]>v[0])
    {
        count++;
        return count <= 1;
    }
    
}
int main()
{
    vector <int> v = {4,5,6,1,2,9,8};
    print(un_rotate(v));
    if (if_sorted(un_rotate(v))==true)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    
return 0;
}