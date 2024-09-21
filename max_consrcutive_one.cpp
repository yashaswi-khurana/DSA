#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums){
 int local_max=0;
 int global_max=0;
 for (int i =0; i<nums.size(); i++) {
  if(nums[i]==1){
   local_max++;
   global_max=max(local_max,global_max);
  }else {
   local_max=0;
  }
 }
 return global_max;
}
int main(){
 int n;
 cin>>n;
 vector<int>nums;
 for (int i = 0;i<n;i++) {
  int k;
  cin>>k;
  nums.push_back(k);
 }
 cout<<findMaxConsecutiveOnes(nums)<<endl;
 return 0;
}
