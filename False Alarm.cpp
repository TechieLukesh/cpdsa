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
    int n, x;
    cin >> n >> x;

    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = n;
    int r = -1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 1)
        {
            l = min(l, i);
            r = max(r, i);
        }
    }
    if (r - l + 1 <= x)
        cout << "Yes\n";
    else
        cout << "No\n";
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