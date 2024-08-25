#include <bits/stdc++.h>
using namespace std;

vector<int> prime_till_n(int n) {
    vector<int> primes;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;    
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }    
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }    
    return primes;
}

int min_num(int n, int m) {
    vector<int> primes = prime_till_n(n);
    if (m > primes.size()) m = primes.size();
    
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    
    for (int i = 0; i < m; i++) {
        for (int j = primes[i]; j <= n; j++) {
            if (dp[j - primes[i]] != INT_MAX) {
                dp[j] = min(dp[j], dp[j - primes[i]] + 1); 
            }
        }
    }
    
    return dp[n] == INT_MAX ? -1 : dp[n];
}
int main() {
    cout << min_num(10, 1) << endl;  // Should output 5
    cout << min_num(10, 2) << endl;  // Should output 2
    cout << min_num(100, 3) << endl; // Should output 5
    return 0;
}