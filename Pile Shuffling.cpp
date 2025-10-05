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
typedef vector<vi> vvi;

const int mod = 1000000007;

void solve()
{
    int n;
    cin >> n;

    vvi arr(n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        arr[i] = {a, b, c, d};
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i][0], b = arr[i][1], c = arr[i][2], d = arr[i][3];
        bool lose = b > d;

        if (lose)ans += a + b - d;
        
        else ans += max(0, a - c);
        
    }

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    
        solve();
    
    return 0;
}