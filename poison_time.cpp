#include <iostream>
#include <vector>
using namespace std;

int findPoisonedDuration(vector<int> &timeSeries, int duration) {
  if (timeSeries.empty())
    return 0;

  int totalPoisonedTime = 0;

  for (int i = 0; i < timeSeries.size() - 1; i++){
    int interval = timeSeries[i + 1] - timeSeries[i];
  totalPoisonedTime += min(interval, duration);
}
totalPoisonedTime += duration;
return totalPoisonedTime;
}

int main() {
  vector<int> timeSeries = {1, 4, 7}; // Example input
  int duration = 3;

  cout << "Total poisoned duration: "
       << findPoisonedDuration(timeSeries, duration) << endl;
  return 0;
}
