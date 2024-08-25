#include <bits/stdc++.h>
using namespace std;
class sol {
    private:
    void sum(vector<int> &arr,int n, vector<int> &ans,int index,int sumo){
        if(index==n){
            ans.push_back(sumo);
            return;
        }
        //Pick
        sum(arr,n,ans,index+1,sumo+arr[index]);
        //Not Pick
        sum(arr,n,ans,index+1,sumo);
    }
    public:
    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> ans;
        sum(arr,n,ans,0,0);
        return ans;
    }
};
    void print(vector<int> ans){
        for(int i = 0; i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
int main()
{   
    sol s;
    int n = 2;
    vector<int> arr = {2,3};
    vector<int> ans = s.subsetSums(arr,n);
    print(ans);
return 0;
}