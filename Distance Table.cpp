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

void recSol(int x, int n, vi &d, int sum)
{
    // base case
    if (x >= n)
        return;

    sum += d[x];
    cout << sum << " ";

    recSol(x + 1, n, d, sum);
}

void solve()
{
    int n;
    cin >> n;
    vi d(n - 1);
    for (int i = 0; i < n; i++)

        cin >> d[i];
    for (int i = 0; i < n - 1; i++)
    {
        recSol(i, n - 1, d, 0);
        cout << "\n";
    }
}

int main()
{
    solve();
    return 0;
}