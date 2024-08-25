#include <iostream>
using namespace std;

// Function to print all subarrays of the given array
int printAllSubarrays(int arr[], int n) {
    int sum = 0;
    // Traverse all starting points of subarrays
    for (int start = 0; start < n; ++start) {
        // Traverse all ending points of subarrays
        for (int end = start; end < n; ++end) {
            // Print the subarray from start to end
            for (int k = start; k <= end; ++k) {
                sum+=arr[k];
            }
        }
    }
    return sum;
}

int main() {
    // Example array
    int arr[] = {1, 2, 3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print all subarrays
    int ans = printAllSubarrays(arr, n);
    cout<<ans;
    return 0;
}
