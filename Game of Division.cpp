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
    int n, k;
    cin >> n >> k;

    vi a(n);

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i] % k]++;
    }

    bool aWins = false;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i] % k] == 1)
        {
            cout << "Yes\n"
                 << i + 1 << "\n";
            aWins = true;
            break;
        }
    }

    if (!aWins)
        cout << "No\n";
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