#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int MAXN = 105;

const int mod = 1000000007;

void solve()
{
    int n;
    cin >> n;
    vector<int> x(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    int y = n - 1;
    vector<vector<int>> g(y + 1);
    vector<pair<int, int>> q;
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 0)
        {
            if (i > 1)
                q.push_back({i - 1, 1});
            if (i < n)
                q.push_back({i, 0});
        }
        else
        {
            if (i == 1)
                q.push_back({1, 1});
            else if (i == n)
                q.push_back({n - 1, 0});
            else
                g[i - 1].push_back(i);
        }
    }
    vector<int> z(y + 1, -1);
    deque<pair<int, int>> d;
    for (auto u : q)
        d.push_back(u);
    bool ok = 0;
    while (!d.empty() && !ok)
    {
        auto p = d.front();
        d.pop_front();
        int i = p.first, v = p.second;
        if (z[i] != -1)
        {
            if (z[i] != v)
                ok = 1;
            continue;
        }
        z[i] = v;
        if (v == 1)
        {
            for (int j : g[i])
            {
                d.push_back({j, 1});
            }
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
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