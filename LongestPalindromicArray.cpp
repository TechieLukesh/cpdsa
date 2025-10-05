#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to find the maximum palindromic length
int maxPalindromicLength(vector<int> &arr)
{
    int n = arr.size();

    // Prefix sum to calculate the sum of any subarray
    vector<int> prefixSum(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        prefixSum[i + 1] = prefixSum[i] + arr[i];
    }

    // Map to store first occurrence of each prefix sum
    unordered_map<int, int> firstOccurrence;
    firstOccurrence[0] = 0;

    // Maximum palindrome length
    int maxLength = 0;

    for (int i = 1; i <= n; ++i)
    {
        // Check if this prefix sum has occurred before
        if (firstOccurrence.find(prefixSum[i]) != firstOccurrence.end())
        {
            // Calculate the palindromic length
            int palLength = i - firstOccurrence[prefixSum[i]];
            maxLength = max(maxLength, palLength);
        }
        else
        {
            // Store the first occurrence of this prefix sum
            firstOccurrence[prefixSum[i]] = i;
        }
    }

    return maxLength;
}

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int result = maxPalindromicLength(arr);
    cout << result << endl;

    return 0;
}