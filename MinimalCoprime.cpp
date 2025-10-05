#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> results;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (l == 1 && r == 1)
        {
            cout << 1 << endl;
            continue;
        }

        cout << r - l << endl;
    }

    return 0;
}