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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll diff = INT_MAX;
        for (ll i = 1; i < n; i++)
        {
            diff = min(diff, arr[i] - arr[i - 1]);
        }

        if (diff < 0)
        {
            cout << 0 << endl;
        }

        else
        {
            cout << diff / 2 + 1 << endl;
        }
    }
    return 0;
}