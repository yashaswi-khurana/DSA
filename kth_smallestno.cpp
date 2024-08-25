#include <bits/stdc++.h>
using namespace std;
int kth_element(int k, vector<int> &num){
    priority_queue<int> pq;
    for (int i = 0; i < num.size(); i++)
    {
        pq.push(num[i]);
    }
    for (int i = 0; i < k-1; i++)
    {
        pq.pop();
    }
    return pq.top();
}
int main()
{
    // vector<int> num = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    vector<int> num = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int k = 10;
    cout<<kth_element(k, num)<<endl;
    vector<int> num1 = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int k1 = 5;
    cout<<kth_element(k1, num1)<<endl;
return 0;
}