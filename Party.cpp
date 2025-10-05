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
typedef vector<vi> vvi;

const int mod = 1000000007;

void solve()
{
    int n;
    if (!(cin >> n))
        cout << 0 << "\n";

    vvi children(n + 1);
    vi manager(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> manager[i];
    vi root;

    for (int i = 1; i <= n; i++)
    {
        if (manager[i] == -1)
            root.push_back(i);
        else
            children[manager[i]].push_back(i);
    }

    int maxDepth = 0;

    for (int r : root)
    {
        queue<pair<int, int>> q; // (node, depth)
        q.push({r, 1});
        while (!q.empty())
        {
            pair<int, int> p = q.front();
            q.pop();
            int u = p.first;
            int d = p.second;
            maxDepth = max(maxDepth, d);
            for (int v : children[u])
                q.push({v, d + 1});
        }
    }
    cout << maxDepth << "\n";
}

int main()
{
    solve();

    return 0;
}