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
    vi h(n), g(n);

    for (int i = 0; i < n; i++)
        cin >> h[i] >> g[i];

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && h[i] == g[j])
                count++;
        }
    }

    cout << count << "\n";
}

int main()
{
    solve();
    return 0;
}