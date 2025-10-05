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

bool even(ll num)
{
    return (num % 2) == 0;
}

void solve()
{
    ll x, n;
    cin >> x >> n;

    ll ans;

    switch (n % 4)
    {
    case 0:
        ans = 0;
        break;

    case 1:
        ans = -n;
        break;

    case 2:
        ans = 1;
        break;

    case 3:
        ans = n + 1;
    }

    if (even(x))
        cout << x + ans << "\n";
    else
        cout << x - ans << "\n";
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