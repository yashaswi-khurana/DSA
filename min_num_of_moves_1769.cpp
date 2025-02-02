#include <bits/stdc++.h>
using namespace std;

vector<int> minOperations(string boxes)
{
    vector<int> ans(boxes.size(), 0);
    vector<int> containors;
    for (int i = 0; i < boxes.size(); i++)
    {
        if (boxes[i] == '1')
        {
            containors.push_back(i);
        }
    }
    for (int i = 0; i < boxes.size(); i++)
    {
        for (int j = 0; j < containors.size(); j++)
        {
            ans[i] += abs(i - containors[j]);
        }
    }
    return ans;
}

int main()
{
    vector<int> k = minOperations("110");
    for (auto it : k)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}