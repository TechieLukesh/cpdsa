#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int solve(vector<int> &arr, int k)
{
    int i = 0;
    int minsum = INT_MAX;

    int sum = 0;
    for (int j = 0; j < k; j++)
    {
        sum += arr[j];
    }

    for (int j = k; j < arr.size(); j++)
    {
        minsum = min(minsum, sum);
        sum += arr[j];
        sum -= arr[i];
        i++;
    }

    return min(minsum, sum);
}

int main()
{
    int n, k;
    cin >> n >> k;  // Corrected input reading
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = solve(arr, k);  // Capture the result
    cout << "Minimum sum of " << k << " consecutive elements: " << result << endl; // Print the result
    return 0;
}
