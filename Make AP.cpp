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
    int a, b, c;
    cin >> a >> b >> c;

    bool isTrue = false;

    if ((2 * b - c) % a == 0)
    {
        if ((2 * b - c) / a > 0)
        {
            isTrue = true;
        }
    }

    if ((c + a) % (2 * b) == 0)
    {
        isTrue = true;
    }

    if ((2 * b - a) % c == 0)
    {
        if ((2 * b - a) / c > 0)
        {
            isTrue = true;
        }
    }

    if (a == b && b == c)
        isTrue = true;

    if (isTrue)
    {
        cout << "Yes" << "\n";
    }

    else
        cout << "No" << "\n";
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