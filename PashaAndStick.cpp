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
    if (n % 2 != 0)
    {
        cout << 0 << endl;
        return;
    }

    n /= 2;
    ll ans = n - 1;
    if (n % 2 == 0)
        n--;

    cout << ans / 2 << endl;
}

int main()
{

    solve();

    return 0;
}