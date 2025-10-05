#include <bits/stdc++.h>

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
    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sum = accumulate(a.begin(), a.end(), 0LL);

    ll mini = sum / x + (sum % x != 0);

    ll maxi = 0;
    for (auto &it : a)
    {
        maxi += it / x + (it % x != 0);
    }

    cout << mini << " " << maxi << "\n";
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