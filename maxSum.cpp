#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n)
{
    if (arr.empty()) return 0;

    long long curr_max = arr[0]; // Use long long to avoid overflow
    long long global_max = arr[0]; // Use long long to avoid overflow

    for (int i = 1; i < n; i++) {
        long long num = arr[i]; // Current element
        // Decide whether to start a new subarray or continue the existing one
        curr_max = max((long long)num, curr_max + num);
        // Update the global maximum
        global_max = max(global_max, curr_max);
    }

    return global_max;
}

int main() {
    // Input
    vector<int> arr = {-7, -8, -16, -4, -8, -5, -7, -11, -10, -12, -4, -6, -4, -16, -10};
    int n = arr.size();

    // Compute result
    long long result = maxSubarraySum(arr, n);

    // Output
    cout << result << endl; // Should output -4

    return 0;
}