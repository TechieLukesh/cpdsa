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

    sort(a.begin(), a.end());
    int minEl = a[0], maxEl = a[n - 1];

    if ((maxEl + minEl) % 2 == 0)
    {
        cout << 0 << "\n";
        return;
    }

    int chnageMin = n;
    int chnageMax = n;

    for (int i = 0; i < n; i++)
    {
        if ((a[i] % 2) != (minEl % 2))
        {
            chnageMin = i;
            break;
        }
    }

    for (int j = n - 1; j >= 0; j--)
    {
        if ((a[j] % 2) != (maxEl % 2))
        {
            chnageMax = n - j - 1;
            break;
        }
    }

    cout << min(chnageMin, chnageMax) << "\n";
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