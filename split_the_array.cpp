#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution{
 public:
 bool isPossibleToSplit(vector<int> nums){
  map<int,int> mp;
  for(auto it: nums){
   mp[it]++;
  }
  for(auto it: mp){
   if(it.second>2) return false;
  }
  return true;
 }
};
int main(){
 int n;
 cin>>n;
 vector<int> nums;
 for(int i = 0; i<n;i++){
  int k;
  cin>>k;
  nums.push_back(k);
 }
 Solution s;
 bool ans = s.isPossibleToSplit(nums);
 cout<<ans<<endl;
 return 0;
}
