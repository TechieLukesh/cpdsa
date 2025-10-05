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

    int count2 = 0, count3 = 0;

    while (n % 2 == 0)
    {
        n /= 2;
        count2++;
    }

    while (n % 3 == 0)
    {
        n /= 3;
        count3++;
    }

    if (n != 1)
    {
        cout << -1 << "\n";
        return;
    }

    if (count2 <= count3)
    {
        cout << (count3 - count2) + count3 << "\n";
    }
    else
    {
        cout << -1 << "\n";
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