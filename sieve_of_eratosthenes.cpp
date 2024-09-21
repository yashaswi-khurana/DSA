#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> print_primes_till(int n) {
    vector<int> ans;
    vector<int> primes(n+1, 1);
    primes[1] = 0;
    primes[0] = 0;

    for(int i = 2; i*i <= n; i++) {
        if(primes[i] == 1) {
            for(int j = i*i; j <= n; j += i) {
                primes[j] = 0;
            }
        }
    }

    for(int i = 0; i < primes.size(); i++) {
        if(primes[i]) {
            ans.push_back(i);
        }
    }

    return ans;
}

int main() {
    int n = 50; // Example usage
    vector<int> primes = print_primes_till(n);

    // Printing the primes
    for (int prime : primes) {
        cout << prime << " ";
    }

    return 0;
}
