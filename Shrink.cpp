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
    vi a;
    if (n == 3)a = {2, 3, 1};
    else
    {
        a.push_back(2);a.push_back(3);a.push_back(n);
        for (int i = 4; i <= n - 1; i++)
            a.push_back(i);a.push_back(1);
    }
    for (int x : a)cout << x << ' ';
    cout << endl;
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
