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
    int initPassenger = 0;
    int maxPassennger = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;

        initPassenger -= a;
        initPassenger += b;

        maxPassennger = max(maxPassennger, initPassenger);
    }
    cout << maxPassennger << "\n";
}

int main()
{
    solve();

    return 0;
}