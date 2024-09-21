#include <iostream>
using namespace std;
int main(){
 string input;
 cin>>input;
 long long int max_sum = 1;
 long long int sum = 1;
 // char prev_char = input[0];
 for(int i = 1;i <input.size();i++){
  char prev_char = input[i-1];
  if(input[i]==prev_char){
   sum++;
  }else {
   sum=1;
  }
  max_sum=max(max_sum,sum);
 }
 cout<<max_sum<<endl;
 return 0;
}
