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
    int n;
    cin >> n;

    vi a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
    {
        if (abs(a[i - 1] - a[i]) <= 1)
        {
            cout << 0 << "\n";
            return;
        }
    }

    if (is_sorted(a.begin(), a.end()) || is_sorted(a.begin(), a.end(), greater<int>()) || a.size() <= 2)

        cout << -1 << "\n";

    else
        cout << 1 << "\n";
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
