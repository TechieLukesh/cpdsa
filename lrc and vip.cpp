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
        cin >> a[i];

    int maxi = *max_element(a.begin(), a.end());

    int mini = *min_element(a.begin(), a.end());

    if (maxi == mini)
    {
        cout << "No\n";
        return;
    }

    cout << "Yes\n";

    for (int i = 0; i < n; i++)

        cout << (1 + (a[i] == maxi)) << " \n"[i + 1 == n];
    ;
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