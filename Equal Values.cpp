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
typedef vector<long long> vll;

const int mod = 1000000007;

void solve()
{
    int n;
    cin >> n;
    vll a(n);

    for (int i = 0; i < n; ++i)cin >> a[i];
    

    ll min_cost = LLONG_MAX;

    for (int i = 0; i < n;)
    {
        int j = i;
        while (j + 1 < n && a[j + 1] == a[i]) ++j;
        
        ll val = a[i];
        ll cost = val * (i + (n - 1 - j));
        if (cost < min_cost)min_cost = cost;
        
        i = j + 1;
    }

    cout << min_cost << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    
        solve();
    
    return 0;
}