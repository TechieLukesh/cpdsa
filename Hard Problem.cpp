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

int solve()
{
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int totalSeats = 0;
    if (a > m && b > m)
    {
        totalSeats += 2 * m;
    }
    if (a > m)
    {
        totalSeats += m + b;

        totalSeats += 2 * m - (m + b);
    }

    else
    {

        totalSeats += m + a;

        totalSeats += 2 * m - (m + a);
    }
    return totalSeats;
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