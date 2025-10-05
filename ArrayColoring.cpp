#include <iostream>
#include <vector>
using namespace std;

bool solve(vector<int> &arr, int n)
{
    int odd_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd_count++;
        }
    }

    if (odd_count % 2 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
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

        bool result = solve(arr, n);

        if (result)
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