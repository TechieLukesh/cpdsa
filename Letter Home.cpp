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
    int n, s;
    cin >> n >> s;
    vi a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vi visited(n, 0);

    int minEl = *min_element(a.begin(), a.end());
    int maxEl = *max_element(a.begin(), a.end());

    int cnt1 = abs(s - minEl) + (maxEl - minEl);
    int cnt2 = abs(s - maxEl) + (maxEl - minEl);

    cout << min(cnt1, cnt2) << "\n";
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