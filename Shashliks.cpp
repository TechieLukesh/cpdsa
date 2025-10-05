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
    int k, a, b, x, y;

    cin >> k >> a >> b >> x >> y;

    if (x > y)
    {
        swap(x, y);
        swap(a, b);
    }

    ll d1 = k - a;
    ll l = 0;

    if (d1 >= 0)
    {
        l = d1 / x + 1;
        k -= l * x;
    }

    ll d2 = k - b;
    if (d2 >= 0)
        l += d2 / y + 1;

    cout << l << "\n";
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