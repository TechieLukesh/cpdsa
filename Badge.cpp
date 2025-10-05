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
    if (!(cin >> n))
        cout << 0 << "\n";

    vi a(n + 1), ans(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        vector<char> seen(n + 1, 0);
        int curr = i;

        while (!seen[curr])
        {
            seen[curr] = 1;
            curr = a[curr];
        }

        ans[i] = curr;
    }

    for (int a = 1; a <= n; ++a)
    {
        cout << ans[a] << " ";
    }
    cout << "\n";
}

int main()
{
    solve();
    return 0;
}