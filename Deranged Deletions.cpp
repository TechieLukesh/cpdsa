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
    cin >> n;

    vi a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vi temp(n);
    temp = a;

    if (is_sorted(a.begin(), a.end()))
    {
        cout << "No\n";
        return;
    }

    cout << "Yes\n";
    sort(a.begin(), a.end());

    vi ans;
    for (int i = 0; i < n; i++)
    {
        if (temp[i] == a[i])
            continue;
        ans.push_back(temp[i]);
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
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