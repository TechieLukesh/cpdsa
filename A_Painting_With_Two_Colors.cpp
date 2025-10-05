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
    ll n, a, b;
    cin >> n >> a >> b;

    bool ok = false;
    if ((b % 2) == (n % 2))
    {
        if (a <= b)
            ok = true;
        else if ((a % 2) == (b % 2))
            ok = true;
    }

    cout << (ok ? "YES\n" : "NO\n");
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}