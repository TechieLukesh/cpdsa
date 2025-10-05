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

int main()
{
    ll n, k;
    cin >> n >> k;

    if (k == 1)
    {
        ll ans = (n * (n - 1)) / 2;
        cout << ans << " " << ans << endl;
        return 0;
    }

    // in case of maximum
    ll maxi = ((n - k + 1) * (n - k)) / 2;

    // in case of minimum

    // evenly dividing group
    ll other1 = n / k;

    // leftover elements
    ll other2 = n % k;

    ll ans2 = (other1 * (other1 - 1)) / 2;

    // groups with leftover elements
    ll ans3 = ((other1 + 1) * other1) / 2;

    ll minAns = ans2 * (k - other2) + ans3 * other2;

    cout << minAns << " " << maxi << endl;

    return 0;
}
