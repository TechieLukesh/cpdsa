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

    vi f(60, 0);
    for (int x : a)f[x]++;
    int ans = 0;
    int c2 = min(f[0], f[1]);
    ans += c2 * 2;
    f[0] -= c2;f[1] -= c2;
    int c1 = f[0];
    ans += c1;
    f[0] = 0;
    for (int i = 0; i < 55; i++)
    {
        if (f[i] > 0)
            ans += i * f[i];
    }
    cout << ans << endl;
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