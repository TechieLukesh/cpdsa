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
    vi s0, s1;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vi a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        s0.push_back(a[0]);
        s1.push_back(a[1]);
    }
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());

    ll ans = 0;
    ans += s0[0];
    for (int i = 1; i < s1.size(); i++)
    {
        ans += s1[i];
    }

    cout << ans << "\n";
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