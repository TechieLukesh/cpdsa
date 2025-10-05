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
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int minOp = 0;

    bool isTrue = true;
    while (a != b)
    {
        if (a == 1)
        {
            minOp += x;
            a++;
        }
        else if (a < b)
        {
            // Moving forward
            if (a % 2 == 0)
                minOp += min(x, y);
            else
                minOp += x;
            a++;
        }
        else if (a > b)
        {
            // Moving backwa
            if (a % 2 != 0)
            {
                minOp += y;
                a--;
            }

            else
            {
                isTrue = false;
                break;
            }
        }
    }
    if (!isTrue)
    {
        cout << -1 << "\n";
        return;
    }

    cout << minOp << "\n";
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