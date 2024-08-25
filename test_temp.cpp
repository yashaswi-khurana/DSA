#include <bits/stdc++.h>
using namespace std;
int sc(vector<int> &C) {
		int s = 0;
		int m =1;
		int e =C.size()-1;
		while(m<=e){
			if(C[m]==2 && C[e]==1){
				swap(C[m],C[e]);
			}
		}
    }
int main(){
	int n = 12;
	int ans = trailingZeroes(n);
	cout<<ans<<endl;
	return 0;
}