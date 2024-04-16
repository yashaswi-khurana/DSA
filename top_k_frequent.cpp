#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
    vector<int> maxi(unordered_map<int,int>& given, int k){
        if (k==0){
            return ans;
        }
        int max = 0;
        for(int i = 0; i<given.size(); i++){
            if(given[i]>max){
                max = i;
            }
        }
        ans.push_back(max);
        k--;
        given.erase(max);
        maxi(given,k);
        return ans;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for (int i : nums){
            map[i]++;
        }
        vector<int> p = maxi(map,k);
        return p;
    }
int main()
{
    vector<int> nums = {-1,-1};
    int k = 2;
    vector<int> ans = topKFrequent(nums,k);
    for(int i : ans){
        cout<<i<<endl;
    }
return 0;
}