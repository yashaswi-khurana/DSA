#include <bits/stdc++.h>
using namespace std;
int egg_break(int n, int k)
{
    if (k == 1 || k == 0)
        return k;
    if (n == 1)
        return k;
    int min = INT_MAX, res;
    for (int x = 1; x <= k; x++)
    {
        res = max(egg_break(n - 1, x - 1), egg_break(n, k - x));
        if (res < min)
            min = res;
    }
    return min + 1;
}
int main()
{
    
return 0;
}