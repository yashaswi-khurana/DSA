#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(4);

    for (int num : s)
    {
        cout << num << " ";
    }
return 0;
}