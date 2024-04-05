#include <bits/stdc++.h>
using namespace std;
    bool isAnagram(string s, string t) {
        unordered_map<char,int> umap;
        for( char ch_s : s){
            umap[ch_s]++;
        }
        for( char ch_t : t){
            umap[ch_t]++;
        }
        for (char ch = 'a'; ch<='z'; ch++){
            if(umap[ch]%2!=0){
                return false;
            }
        }
        return true;
    }
int main()
{
    string a = "anagram";
    string b = "nagaram";
    bool ans = isAnagram(a,b);
    cout<<ans<<endl;
return 0;
}