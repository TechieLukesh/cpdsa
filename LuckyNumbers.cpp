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
    ll ans = 0;
    ll k = 2;
    for (int i = 1; i <= n; i++)
    {
        ans += k;
        k = k * 2LL;
    }
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}