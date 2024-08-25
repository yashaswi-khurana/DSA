#include <bits/stdc++.h>
using namespace std;
//recursion
// bool sub(vector<int> seq, int target,int ind){
// 	if(target==0) return true;
// 	if(ind==0) return (seq[ind]==target);
// 	bool pick = sub(seq,target-seq[ind],ind-1);
// 	bool not_pick = sub(seq,target,ind-1);
// 	return (pick || not_pick);
// }

//tabulation
bool sub(int n, int k, vector<int> &arr){
	vector<vector<bool>> dp(n,vector<int>(k+1,0));
	for (int i = 0; i < n; i++)
	{
		dp[i][0]=true;
	}
	dp[0][arr[0]]==true;
	for(int ind = 1;ind<n;i++){
		for (int target = 1;  target<=k; target++)
		{
			bool notTake = dp[ind-1][target];
			bool take =false;
			if (arr[ind]<=target) 
			{
				take = dp[ind-1][target-arr[ind]];
			}
			dp[ind][target] = take || notTake;
		}
	}
	return dp[n-1][k];
}
int main(){
	vector<int> seq = {1,2,3,4};
	int target = 2;
	int index = seq.size()-1;
	vactor<int> dp()
	bool ans = sub(seq,target,index);
	cout<<ans<<endl;
	return 0;
}