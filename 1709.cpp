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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rev(i, a, b) for (int i = a; i >= b; i--)

const int mod = 1000000007;

void solve()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    vector<ii> ops;

    rep(i, 0, n)
    {
        cin >> a[i];
    }
    rep(i, 0, n)
    {
        cin >> b[i];
    }

    // Ensure a[i] < b[i] using type 3 operations
    rep(i, 0, n)
    {
        if (a[i] > b[i])
        {
            swap(a[i], b[i]);
            ops.push_back({3, i + 1});
        }
    }

    // Sort a using type 1 ops (like bubble sort)
    rep(pass, 0, n)
    {
        rep(i, 0, n - 1)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                swap(b[i], b[i + 1]);
                ops.push_back({1, i + 1});
            }
        }
    }

    // Sort b using type 2 ops
    rep(pass, 0, n)
    {
        rep(i, 0, n - 1)
        {
            if (b[i] > b[i + 1])
            {
                swap(b[i], b[i + 1]);
                swap(a[i], a[i + 1]);
                ops.push_back({2, i + 1});
            }
        }
    }

    // Output operations
    cout << ops.size() << "\n";
    for (auto it : ops)
    {
        cout << it.first << " " << it.second << "\n";
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
