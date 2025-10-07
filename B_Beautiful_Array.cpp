#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    ll mini = (k * b);
    ll maxi = (k * b) + n * (k - 1);

    if (s > maxi || s < mini)
        cout << "-1" << "\n";
    else
    {
        vector<ll> ans(n, 0);
        ans[0] = mini;
        s -= mini;

        for (int i = 0; i < n; i++)
        {
            ll add = min(k - 1, s);
            ans[i] += add;
            s -= add;
        }

        for (ll i = 0; i < n; i++)

            cout << ans[i] << " ";
        cout << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}