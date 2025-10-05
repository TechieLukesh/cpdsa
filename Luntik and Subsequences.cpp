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

    ll ones = count(a.begin(), a.end(), 1);

    ll zeros = count(a.begin(), a.end(), 0);

    if (ones == 0)
        cout << 0 << "\n";

    else
    {
        cout << ones * (1LL << zeros) << "\n";
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