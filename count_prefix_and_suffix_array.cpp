#include <bits/stdc++.h>
using namespace std;

bool isPrefixAndSuffix(const string &str1, const string &str2) {
    if (str1.size() > str2.size()) return false;
    if (str2.substr(0, str1.size()) != str1) return false;
    if (str2.substr(str2.size() - str1.size()) != str1) return false;
    return true;
}

int countPrefixSuffixPairs(vector<string> &words) {
    int n = words.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (isPrefixAndSuffix(words[i], words[j])) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<string> words = {"a", "aba", "ababa", "aa"};
    cout << countPrefixSuffixPairs(words) << endl;
    return 0;
}
