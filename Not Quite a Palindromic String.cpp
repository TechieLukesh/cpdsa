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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int c0 = 0;
    for (char c : s)
        c0 += (c == '0');
    int c1 = n - c0;
    int maxPairs = n / 2;
    int notPairs = maxPairs - k;

    if (c0 < notPairs || c1 < notPairs)
    {
        cout << "NO\n";
        return;
    }

    int gz = (c0 - notPairs) / 2;
    int go = (c1 - notPairs) / 2;
    cout << ((gz + go >= k) ? "YES\n" : "NO\n");
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