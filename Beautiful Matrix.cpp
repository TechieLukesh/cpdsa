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
    vector<vector<int>> a(5, vector<int>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    pair<int, int> p;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                p.first = i;
                p.second = j;
            }
        }
    }

    int dist = abs(2 - p.first) + abs(2 - p.second);
    cout << dist << "\n";
}

int main()
{
    solve();
    return 0;
}