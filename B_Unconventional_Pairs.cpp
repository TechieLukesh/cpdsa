#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    int maxi = 0;
    for (int i = 0; i < n; i += 2)
    {
        int absDiff = abs(a[i] - a[i + 1]);
        maxi = max(maxi, absDiff);
    }

    cout << maxi << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}