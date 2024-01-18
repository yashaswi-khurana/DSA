#include <bits/stdc++.h>
using namespace std;
// void merge(vector<int> a,vector<int> b){
//     int temp = 0;
//     int size = b.size();
//     while (size!=0))
//     {   
//         for (int i = 0,j=0; i < a.size(), j<b.size(); i++,j++)
//         {
//             if (a[i]<b[j] & a[i+1]>b[j])
//             {
//                 temp = b[j];
//             }
            
//         }
        
//         size--;
//     }
    
// }
int main()
{
    vector <int> k = {1,2,3};
    cout<<k.capacity()<<endl;
    k.push_back(4);
    cout<<k.capacity()<<endl;
    cout<<k[5]<<endl;
return 0;
}