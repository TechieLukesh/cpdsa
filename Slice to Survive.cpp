#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

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
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    // if the cut is row-wise

    int p = ceil(log2((double)min(a, n - a + 1)));
    int q = ceil(log2((double)m));

    // if the cut is col-wise

    int r = ceil(log2((double)min(b, m - b + 1)));
    int s = ceil(log2((double)n));

    cout << min(p + q, r + s) + 1 << "\n";
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