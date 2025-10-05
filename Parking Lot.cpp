#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

ll binpow(ll a, ll b)
{
    ll res = 1;

    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }

    return res;
}

int main()
{

    int n;
    cin >> n;

    ll ans = 1LL * 2 * 4 * 3 * binpow(4, n - 3) + (n - 3) * 3 * 3 * binpow(4, n - 3);

    cout << fixed << setprecision(0) << ans << endl;

    return 0;
}