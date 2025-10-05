#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vl;
typedef vector<pll> vpl;

#define fast()               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define read(v)       \
    for (auto &x : v) \
    cin >> x

const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    read(a);

    vi pre(n + 1, 0);
    for (int i = 0; i < n; i++)
        pre[i + 1] = pre[i] + a[i];

    int cnt = 0;
    for (int i = 0; i + k <= n;)
    {
        if (pre[i + k] - pre[i] == 0)
        {
            cnt++;
            i += k + 1;
        }
        else
        {
            i++;
        }
    }

    cout << cnt << "\n";
}

int main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
