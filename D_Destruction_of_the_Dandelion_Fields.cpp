#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> odd, even;
    for (auto x : a)
    {
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }

    ll cut = 0;

    if (!odd.empty())
    {
        cut += accumulate(even.begin(), even.end(), 0LL);
        sort(odd.rbegin(), odd.rend());

        for (int i = 0; i < (odd.size() + 1) / 2; i++)
        {
            cut += odd[i];
        }
    }

    cout << cut << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
