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
    vector<int> a(n);
    for (int i = 0; i < n; i++)

        cin >> a[i];

    int ops = 0;

    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] == 0)
        {
            cout << -1 << "\n";
            return;
        }
        while (a[i - 1] > 0 && a[i] <= a[i - 1])
        {
            a[i - 1] /= 2;
            ops++;
        }
    }

    cout << ops << endl;
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