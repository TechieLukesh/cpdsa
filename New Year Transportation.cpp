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
    int n, t;
    cin >> n >> t;

    vi a(n);

    for (int i = 1; i < n; i++)
        cin >> a[i];

    a[n] = 1;
    bool isPossible = false;
    for (int i = 1; i <= n; i += a[i])
    {
        if (i == t)
        {
            isPossible = true;
            cout << "Yes\n";
            break;
        }
    }

    if (!isPossible)
        cout << "No\n";
}

int main()
{
    solve();
    return 0;
}