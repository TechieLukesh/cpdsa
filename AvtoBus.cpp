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
    unsigned long long int n, maxi = 0, mini = 2e18;
    cin >> n;

    if (n % 2 != 0 || n < 4)
    {
        cout << -1 << "\n";
    }

    else
    {
        if (n % 6 == 0)
        {
            mini = n / 6;
            if (n / 6 == 1)
                maxi = 1;
        }

        if (n % 4 == 0)
        {
            maxi = n / 4;
            if (n / 4 == 1)
                mini = 1;
        }

        if (n % 6 == 4 || n % 6 == 2)
        {
            mini = min(mini, n / 6 + 1);
        }
        if (n % 4 == 2)
        {
            maxi = max(maxi, n / 4);
        }
        cout << mini << " " << maxi << "\n";
    }
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