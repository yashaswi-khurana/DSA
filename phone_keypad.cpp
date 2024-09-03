#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
       unordered_map<char, string> mp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
    void combinations(string digits,unordered_map<char, string> mp,vector<string> ans, int i){
        if(i==digits.size()) return;
        for (auto it: mp[digits[i]])
        {
            
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits=="") return ans;
        combinations(digits,mp,ans,0);
        return ans;
    }
};
int main()
{
    
return 0;
}