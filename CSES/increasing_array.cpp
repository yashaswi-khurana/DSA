#include <iostream>
#include <vector>
using namespace std;
int main(){
 long long int n;
 cin>>n;
 vector<int> array;
 for(int i = 0; i<n;i++){
  long long int ele;
  cin>> ele;
  array.push_back(ele);
 }
 long long int ans = 0;
 for(int i = 1; i<n;i++){
  long long int prev = array[i-1];
  if(prev>array[i]){
   ans+=(prev-array[i]);
   array[i]=prev;
  }
 }
 cout<<ans<<endl;
 return 0;
}
