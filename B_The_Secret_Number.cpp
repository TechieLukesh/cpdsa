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
typedef vector<ll> vll;

const int mod = 1000000007;

void solve()
{
    ll n;
    cin >> n;

    vll res;
    ll d = 11;
    for (int i = 1; i <= 17; i++)
    {
        if (n % d == 0)
        {
            ll x = n / d;
            res.push_back(x);
        }
        d = (d - 1) * 10 + 1;
    }

    if (res.empty())
    {
        cout << 0 << "\n";
    }
    else
    {
        sort(res.begin(), res.end());
        cout << res.size() << "\n";
        for (auto x : res)
            cout << x << " ";
        cout << "\n";
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