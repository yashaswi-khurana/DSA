#include <bits/stdc++.h>
using namespace std;
class solution{
    private:
    bool isPalindrome(string s,int i,int j){
        while (i<j)
        {
            if (s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    public:
    vector<vector<string>> r(int index, string s, vector<vector<string>>& ans, vector<string> path) {
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            if(isPalindrome(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                r(i+1,s,ans,path);
                path.pop_back();
            }
        }
        
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        r(0,s,ans,path);
        return ans;
    }
};
int main()
{
    
return 0;
}