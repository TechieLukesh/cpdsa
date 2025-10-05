#include <iostream>
using namespace std;

long long calculateLuckyValue(long long n, long long k)
{
    long long luckyValue = 0;

    // Start the observation from the full range [1, n]
    long long length = n;

    // While the length of the segment is greater than or equal to k
    while (length >= k)
    {
        // Calculate the middle position
        long long m = (length + 1) / 2; // This is effectively ceil(length / 2)
        luckyValue += m;                // Add the middle star position to the lucky value
        length -= 1;                    // Reduce the range size for further segments
    }

    return luckyValue;
}

int main()
{
    int t;
    cin >> t; // Read number of test cases
    while (t--)
    {
        long long n, k;
        cin >> n >> k;                             // Read n and k for each test case
        cout << calculateLuckyValue(n, k) << endl; // Calculate and output the lucky value
    }
    return 0;
}
