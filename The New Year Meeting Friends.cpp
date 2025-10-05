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
    vi dist(3);

    for (int i = 0; i < 3; i++)
        cin >> dist[i];

    sort(dist.begin(), dist.end());

    int minDist = dist[1];

    int aDist = abs(dist[0] - minDist);
    int bDist = abs(dist[1] - minDist);
    int cDist = abs(dist[2] - minDist);

    int ans = aDist + bDist + cDist;

    cout << ans << "\n";
}

int main()
{
    solve();
    return 0;
}