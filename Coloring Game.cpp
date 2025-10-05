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
    int n;
    cin >> n;

    vi a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int change = max(a[n - 1], 2 * a[i]);
            int c = change - a[i] - a[j];
            int ub = upper_bound(a.begin(), a.begin() + j, c) - a.begin();
            ans += (j - ub);
        }
    }

    cout << ans << "\n";
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