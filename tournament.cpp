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
    int n, j, k;
    cin >> n >> j >> k;

    vi a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int max_el = *max_element(a.begin(), a.end());

    if (k >= 2 || a[j - 1] == max_el)

        cout << "Yes\n";

    else

        cout << "No\n";
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