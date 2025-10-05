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
    ll n, k;
    cin >> n >> k;

    if (k >= 60)
    {
        cout << n + 1 << "\n";
    }

    else
    {
        ll p = 1LL << k; // 2^k
        cout << min(p, n + 1) << "\n";
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