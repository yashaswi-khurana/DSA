#include <bits/stdc++.h>
using namespace std;
void printWave(vector<vector<int>> arr, int nrow, int mcol){
    for (int col = 0; col < mcol ;col++)
    {
        if (col&1)
        {
            for (int row= nrow-1; row>=0; row--)
            {
                cout<<arr[row][col]<<" ";
            }
            
        }
        else
        {
            for (int row= 0; row <nrow; row++)
            {
                cout<<arr[row][col]<<" ";
            }
        }
        
    }
    
}
int main()
{
    vector<vector<int>>arr={{1,2},{3,4}};
    printWave(arr,2,2);
return 0;
}