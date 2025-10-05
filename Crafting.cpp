#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    cin >> n;

    while (t--)
    {
        vector<long long> a(n);
        vector<long long> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        long long excess = 0, deficit = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= b[i])
            {
                excess += (a[i] - b[i]);
            }

            else
            {
                deficit += (b[i] - a[i]);
            }
        }

        if (excess >= deficit)
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