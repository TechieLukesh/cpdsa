#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isGood(const vector<int> &arr)
{
    unordered_map<int, int> freq;

    // Count frequencies of elements in the array
    for (const auto &it : arr)
    {
        freq[it]++;
    }

    // If all elements are the same, the array is good
    if (freq.size() == 1)
    {
        return true;
    }

    // If there are exactly two unique elements
    if (freq.size() == 2)
    {
        auto it = freq.begin();
        int count1 = it->second;
        ++it;
        int count2 = it->second;

        // Check if the difference in counts is at most 1
        return abs(count1 - count2) <= 1;
    }

    // More than two unique elements, not good
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (isGood(arr))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
