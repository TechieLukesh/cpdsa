#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isKMost(const vector<int> &arr, int k)
{
    if (find(arr.begin(), arr.end(), k) == arr.end())
    {
        return false;
    }

    else
    {
        return true;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (isKMost(arr, k))
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