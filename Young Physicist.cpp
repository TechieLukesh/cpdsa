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
    int x = 0, y = 0, z = 0;
    while (n--)
    {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;

        x += xi;
        y += yi;
        z += zi;
    }

    if (x == 0 && y == 0 && z == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    solve();
    return 0;
}