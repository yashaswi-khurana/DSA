#include <iostream>
using namespace std;

int main() {
    int n, S;
    cin >> n >> S;
    int num_coins = S / n;
    int remainder = S % n;
    if (remainder != 0) {
        num_coins++;
    }
    
    cout << num_coins << endl;
    return 0;
}
