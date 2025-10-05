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
    int n, m, p, q;
    cin >> n >> m >> p >> q;

    if (n % p == 0)
    {
        if (m == q * (n / p))

            cout << "Yes\n";

        else
            cout << "No\n";
    }
    else
        cout << "Yes\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}