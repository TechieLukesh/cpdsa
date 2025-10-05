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
    int n, m;
    cin >> n >> m;
    if (min(n, m) >= 2 && max(n, m) >= 3)cout << "YES\n";
    
    else cout << "NO\n";
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    
        solve();
    
    return 0;
}