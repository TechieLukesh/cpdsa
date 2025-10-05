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
    int n, m;
    cin >> n >> m;
    vector<vector<char>> snakeMat(n, vector<char>(m, '.'));

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                snakeMat[i][j] = '#';
            }
        }

        else
        {
            if ((i / 2) % 2 == 0)
                snakeMat[i][m - 1] = '#'; // right #
            else
                snakeMat[i][0] = '#'; // left #
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << snakeMat[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    solve();
    return 0;
}