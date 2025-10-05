#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>

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
    string s;
    cin >> s;

    s = "0" + s;

    int ans = 0;
    char curr = s[0];

    for (int i = 1; i <= n; i++)
    {
        if (s[i] != curr)
            ans++;

        curr = s[i];
    }

    if (ans >= 3)
        cout << ans - 2 + n << "\n";

    else if (ans == 2)
        cout << ans - 1 + n << "\n";
    else
        cout << ans + n << "\n";
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