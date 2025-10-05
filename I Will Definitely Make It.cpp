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

#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define read(v)       \
    for (auto &x : v) \
    cin >> x
#define all(v) v.begin(), v.end()
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    vi h(n);
    read(h);

    int hk = h[k - 1];
    int Hmax = *max_element(all(h));

    if (hk == Hmax)
    {
        yes;
        return;
    }

    vi v = h;
    sort(all(v));
    v.erase(unique(all(v)), v.end());

    int pos = lower_bound(all(v), hk) - v.begin();
    bool ok = true;

    for (int i = pos; i + 1 < (int)v.size(); ++i)
    {
        if (v[i + 1] - v[i] > hk)
        {
            ok = false;
            break;
        }
    }

    ok ? yes : no;
}

int main()
{
    fast();
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}