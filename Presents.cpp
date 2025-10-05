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
    vi giver(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        giver[a[i]] = i + 1;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << giver[i] << " ";
    }
}

int main()
{
    solve();
    return 0;
}