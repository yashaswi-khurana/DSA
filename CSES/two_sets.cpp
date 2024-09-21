#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  long long int sum = n * (n + 1) / 2;
  if (sum % 2 != 0) {
    cout << "NO" << endl;
    return 0;
  }
  cout << "YES" << endl;
  vector<long long int> set1, set2;
  long long int target = sum / 2;
  for (long long int i = n; i >= 1; i--) {
    if (target >= i) {
      set1.push_back(i);
      target -= i;
    } else {
      set2.push_back(i);
    }
  }
  cout << set1.size() << endl;
  for (long long int num : set1) {
    cout << num << " ";
  }
  cout << endl;
  cout << set2.size() << endl;
  for (long long int num : set2) {
    cout << num << " ";
  }
  cout << endl;
  return 0;
}
