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
    int k, n, w;
    cin >> k >> n >> w;

    int totalCost = 0;
    for (int i = 1; i <= w; i++)

        totalCost += i * k;

    cout << max(0, totalCost - n) << "\n";
}

int main()
{
    solve();
    return 0;
}