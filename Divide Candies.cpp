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
    long long n, m;
    cin >> n >> m;

    long long res = 0;
    for (long long x = 0; x < m; ++x)
    {
        for (long long y = 0; y < m; ++y)
        {
            if ((x * x + y * y) % m == 0)
            {
                long long cnt_x = (n - x + m) / m;
                if (x == 0)
                    cnt_x = n / m;
                else
                    cnt_x = (n - x) / m + 1;

                long long cnt_y = (n - y + m) / m;
                if (y == 0)
                    cnt_y = n / m;
                else
                    cnt_y = (n - y) / m + 1;

                res += cnt_x * cnt_y;
            }
        }
    }
    cout << res << endl;
}

int main()
{
    solve();
    return 0;
}