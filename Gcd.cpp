#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a; // Base case: if b becomes 0, return a
    return gcd(b, a % b); // Recursive case: pass b and a%b
}

int main() {
    int ans = gcd(10, 18);
    cout << ans << endl; // Output the GCD
    return 0;
}
