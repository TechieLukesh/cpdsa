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
    ll a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << " " << 0 << "\n";
    }
    else
    {
        if (a < b)
            swap(a, b);

        ll diff = a - b;

        cout << diff << " " << min(b % diff, diff - b % diff) << "\n";
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