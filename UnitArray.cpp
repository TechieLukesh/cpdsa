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

        ll posOnes = 0;
        ll negOnes = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] == 1)
                posOnes++;

            else
                negOnes++;
        }

        ll ans = 0;

        while (posOnes < negOnes || negOnes % 2 == 1)
        {
            ans++;
            negOnes--;
            posOnes++;
        }

        cout << ans << endl;
    }
    return 0;
}