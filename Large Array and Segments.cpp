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

int count_leq(const vector<ll> &arr, ll val)
{
    return upper_bound(arr.begin(), arr.end(), val) - arr.begin();
}

void solve()
{
    int n, k;
    ll x;
    cin >> n >> k >> x;

    vector<int> a(n);
    for (int &num : a)
        cin >> num;

    vector<ll> P(n, 0);
    for (int i = 1; i < n; i++)
    {
        P[i] = P[i - 1] + a[i - 1];
    }
    ll sumA = P[n - 1] + a[n - 1];

    if (k * sumA < x)
    {
        cout << "0\n";
        return;
    }

    ll T = k * sumA - x, ans = 0;
    for (int copy = 0; copy < k; copy++)
    {
        ll limit = T - (ll)copy * sumA;
        if (limit < 0)
            break;
        ans += count_leq(P, limit);
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