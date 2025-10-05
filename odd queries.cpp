#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<ll> pf(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pf[i] = pf[i - 1] + a[i];
    }

    ll total_sum = pf[n];

    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;

        ll sum = pf[r] - pf[l - 1];

        ll range_sum = total_sum - sum + (r - l + 1) * k;

        if (range_sum % 2 != 0)
        {
            cout << "Yes\n";
        }

        else
        {
            cout << "No\n";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}