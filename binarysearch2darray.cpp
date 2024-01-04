#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix,int target){
    int row=matrix.size();
    int col = matrix[0].size();

    int s = 0;
    int e = row*col-1;

    int mid = s+(e-s)/2;
    while (s<=e) {
        mid = s+(e-s)/2;
        if (matrix[mid/col][mid%col]==target) {
            return true;
        }
        else if (matrix[mid/col][mid%col]<target) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }
    }
    return false;
}
int main()
{
    
return 0;
}