#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);
        set<int> missing;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            if (p[i] != 0)
            {
                missing.erase(p[i]);
            }
        }

        missing.clear();
        for (int i = 1; i <= n; i++)
            missing.insert(i);
        for (int x : p)
        {
            if (x != 0)
                missing.erase(x);
        }

        for (int i = 0; i < n; i++)
        {
            if (p[i] == 0)
            {
                auto it = missing.end();
                it--; // move to the largest element
                p[i] = *it;
                missing.erase(it);
            }
        }

        int left = n + 1, right = n;
        for (int i = 0; i < n; i++)
        {
            if (p[i] != i + 1)
            {
                left = min(left, i);
                right = i;
            }
        }

        cout << (right - left + 1) << "\n";
    }

    return 0;
}
