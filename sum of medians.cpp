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
    int n, k;
    cin >> n >> k;

    vector<int> arr(n * k);
    for (int i = 0; i < arr.size(); i++)
        cin >> arr[i];

    long long ans = 0;
    int index = n * k;
    while (k--)
    {
        index -= (n / 2 + 1);
        ans += arr[index];
    }
    cout << ans << '\n';
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