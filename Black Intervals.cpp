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
    int n, q;
    cin >> n >> q;

    vi vis(n + 2, 0);
    int count = 0;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        if (vis[x] == 0)
        {
            vis[x] = 1;
            if (vis[x - 1] == 0 && vis[x + 1] == 0)
                count++;
            else if (vis[x - 1] == 1 && vis[x + 1] == 1)
                count--;
        }

        else
        {
            if (vis[x - 1] == 0 && vis[x + 1] == 0)
                count--;
            else if (vis[x - 1] == 1 && vis[x + 1] == 1)
                count++;

            vis[x] = 0;
        }
        cout << count << "\n";
    }
}

int main()
{
    solve();
    return 0;
}