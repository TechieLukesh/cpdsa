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

    vi l(n), r(n);
    for (int i = 0; i < n; i++)
        cin >> l[i];

    for (int i = 0; i < n; i++)
        cin >> r[i];

    int sf = 0;
    vi ex(n);

    for (int i = 0; i < n; i++)
    {
        if (l[i] >= r[i])
        {
            sf += l[i];
            ex[i] = r[i];
        }
        else
        {
            sf += r[i];
            ex[i] = l[i];
        }
    }

    sort(ex.rbegin(), ex.rend());

    int of = 0;
    for (int i = 0; i < k - 1 && i < n; i++)
        of += ex[i];

    int res = sf + of + 1;
    cout << res << "\n";
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