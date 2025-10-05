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
    ll n;
    cin >> n;

    if (n & 1)
    {
        cout << "Yes\n";
        return;
    }

    while (!(n & 1))
    {
        n /= 2;
    }

    if (n == 1)
        cout << "No\n";
    else
        cout << "Yes\n";
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