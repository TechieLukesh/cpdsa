#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    vector<pair<ll, ll>> p(n);
    for (int i = 0; i < n; i++)
        p[i] = {a[i] - x, a[i] + x};

    ll ans = 0;
    ll l = p[0].first;
    ll r = p[0].second;
    for (int i = 1; i < n; i++)
    {
        l = max(l, p[i].first);
        r = min(r, p[i].second);
        if (l > r)
        {
            ans++;
            l = p[i].first;
            r = p[i].second;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
