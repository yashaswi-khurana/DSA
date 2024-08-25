#include <bits/stdc++.h>
using namespace std;
class aggCow
{
public:
    bool canPlace(vector<int> rooms, int cow, int dist)
    {
        int n = 1;
        int last = rooms[0];
        for (int i = 1; i < rooms.size(); i++)
        {
            if (rooms[i] - last >= dist)
            {
                last = rooms[i];
                n++;
            }
            if (n >= cow)
                return true;
        }
        return false;
    }
    int ag(vector<int> rooms, int cows)
    {
        sort(rooms.begin(), rooms.end());
        int maxi = rooms[rooms.size() - 1];
        int mini = rooms[0];
        int s = 1;
        int e = maxi - mini;
        while (s <= e)
        {
            int m = s + (e - s) / 2;
            if (canPlace(rooms, cows, m) == 1)
            {
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
        }
        return e;
    }
};
int main()
{
    // Test case 1
    vector<int> rooms = {1, 2, 5, 9};
    int cows = 3;
    aggCow a;
    cout << a.ag(rooms, cows) << endl;
    // Test case 2
    vector<int> rooms2 = {1, 2, 8, 4, 9};
    int cows2 = 3;
    cout << a.ag(rooms2, cows2) << endl;
    // Test case 3
    vector<int> rooms3 = {1, 2, 8, 4, 9};
    int cows3 = 4;
    cout << a.ag(rooms3, cows3) << endl;
    return 0;
}