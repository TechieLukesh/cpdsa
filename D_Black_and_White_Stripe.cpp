#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<ll> pf(n + 1, 0);

    for (ll i = 1; i <= n; i++)
    {
        pf[i] = pf[i - 1] + ll(s[i - 1] == 'W');
    }

    ll res = INT_MAX;

    for (ll i = k; i <= n; i++)
    {
        res = min(res, pf[i] - pf[i - k]);
    }

    cout << res << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}