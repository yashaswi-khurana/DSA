#include <bits/stdc++.h>
using namespace std;

bool is_substring(const string &word1, const string &word2) {
    return word2.find(word1) != string::npos;
}

vector<string> stringMatching(vector<string> &words) {
    unordered_set<string> ansSet; // Use a set to avoid duplicates
    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words.size(); j++) {
            if (i != j && is_substring(words[i], words[j])) {
                ansSet.insert(words[i]);
            }
        }
    }
    return vector<string>(ansSet.begin(), ansSet.end());
}

int main() {
    vector<string> words = {"mass", "as", "hero", "superhero"};
    vector<string> ans = stringMatching(words);
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
