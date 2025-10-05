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
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k * l;
    int noToasts = totalDrink / nl;
    int limeSlices = c * d;
    int enoughSalt = p / np;
    int ans = min({noToasts, limeSlices, enoughSalt});
    cout << ans / n << "\n";
}

int main()
{
    solve();
    return 0;
}