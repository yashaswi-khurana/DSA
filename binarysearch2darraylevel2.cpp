#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix,int target){
    int row=matrix.size();
    int col = matrix[0].size();

    int s = 0;
    int e = col-1;

    
    while (s<row && e>=col) {
        int mid = matrix[s][e]
        if (mid==target) {
            return true;
        }
        else if (mid<target) {
            s++;
        }
        else {
            e--;
        }
    }
    return false;
}
int main()
{
    
return 0;
}