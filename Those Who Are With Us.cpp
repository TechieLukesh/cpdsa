#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef map<int, int> mii;

const int mod = 1000000007;

void solve()
{
    int n, m;
    cin >> n >> m;

    vvi a(n, vi(m));
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            maxi = max(maxi, a[i][j]);
        }
    }

    mii row, col;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == maxi)
            {
                row[i]++;
                col[j]++;
                count++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] + col[j] - (a[i][j] == maxi) == count)
            {
                cout << maxi - 1 << "\n";
                return;
            }
        }
    }

    cout << maxi << "\n";
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