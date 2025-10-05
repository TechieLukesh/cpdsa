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

    int maxi = a[0], mini = a[0];
    int maxiIdx = 0, miniIdx = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxi)
        {
            maxi = a[i];
            maxiIdx = i;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] <= mini)
        {
            mini = a[j];
            miniIdx = j;
        }
    }

    int swaps = maxiIdx + (n - 1 - miniIdx);
    if (miniIdx < maxiIdx)
        swaps--;

    cout << swaps << endl;
}

int main()
{
    solve();
    return 0;
}