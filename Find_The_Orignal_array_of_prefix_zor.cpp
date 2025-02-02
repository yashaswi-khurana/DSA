#include <bits/stdc++.h>
using namespace std;
vector<int> findArray(vector<int> &pref)
{
    vector<int> ans;
    ans.push_back(pref[0]);
    if(pref.size()==1) return ans;
    for (int i = 1; i < pref.size(); i++)
    {
        ans.push_back(pref[i]^pref[i-1]);
    }
    return ans;
}
int main()
{
    vector<int> arr = {5,2,0,3,1};
    vector<int> res = findArray(arr);
    for(auto it: res){
        cout<< it<< " ";
    }
    cout<<endl;
    return 0;
}