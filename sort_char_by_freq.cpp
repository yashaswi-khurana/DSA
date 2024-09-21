#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    // Static comparison function for sorting pairs by frequency
    static bool cmp(pair<char, int>& a, pair<char, int>& b) {
        return a.second < b.second;
    }

    string frequencySort(string s) {
        // Count frequency of each character
        map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        // Move map data to a vector of pairs for sorting
        vector<pair<char, int>> v(mp.begin(), mp.end());

        // Sort the vector by frequency (second element of pair)
        sort(v.begin(), v.end(), cmp);

        // Construct the result string based on frequency
        string ans;
        for (auto& it : v) {
            ans.append(it.second, it.first); // Append the character multiple times
        }

        // Reverse the string to get characters sorted by decreasing frequency
        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main() {
    Solution sol;
    string s = "tree";
    string result = sol.frequencySort(s);
    cout<<result<<endl;
    return 0;
}
