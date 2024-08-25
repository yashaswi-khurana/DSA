#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int count =0;
    int rep = 0;
    int num = 0;
        for(int i = 0; i<nums.size();i++){
            if(num==nums[i]){
                if(count<2){
                    count++;
                }
                else{
                    rep++;
                }
            }else{
            count = 1;    
            num = nums[i];
            }
        }
    return nums.size()-rep;
    }
int main(){
	vector <int> nums = {0,0,1,1,1,1,2,3,3};
	int ans = removeDuplicates(nums);
	cout<<ans<<endl;
}