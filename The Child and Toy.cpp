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
    int n, m;
    cin >> n >> m;

    vi a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    ll ans = 0;
    while (m--)
    {
        int x, y;
        cin >> x >> y;

        ans += min(a[x], a[y]);
    }
    cout << ans << "\n";
}
int main()
{
    solve();
    return 0;
}