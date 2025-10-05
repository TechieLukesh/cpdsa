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
        ll n, k, x;
        cin >> n >> k >> x;
        if (k == 1)
        {
            cout << "NO\n";
            continue;
        }
        if (x != 1)
        {
            cout << "YES\n";
            cout << n << "\n";
            for (ll i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << "\n";
            continue;
        }
        if (n % 2 == 1 && k == 2)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        // n is even
        if (n % 2 == 0)
        {
            ll times = n / 2;
            cout << times << "\n";
            for (ll i = 0; i < times; i++)
            {
                cout << 2 << " ";
            }
            cout << "\n";
            continue;
        }

        // n is odd
        ll times = n / 2;
        cout << times << "\n";
        for (ll i = 0; i < times - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
        cout << "\n";
    }
    return 0;
}