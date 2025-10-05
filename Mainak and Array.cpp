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
    ll n;
    cin >> n;

    vector<ll> a(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    ll maxi = a[n] - a[1];

    // for the difference between last and the first element

    for (ll i = 1; i <= n - 1; i++)
    {
        maxi = max(maxi, a[n] - a[i]);
    }

    // for the difference between first and the last element

    for (ll i = 1; i <= n - 1; i++)
    {
        maxi = max(maxi, a[i] - a[1]);
    }

    // for the difference between the previous and next element

    for (int i = 1; i <= n - 1; i++)
    {
        maxi = max(maxi, a[i] - a[i + 1]);
    }

    cout << maxi << endl;
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