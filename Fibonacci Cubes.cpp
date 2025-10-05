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

vector<int> compute_fib(int n)
{
    vector<int> fib(n);
    fib[0] = 1;
    if (n > 1)
        fib[1] = 2;
    for (int i = 2; i < n; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];
    return fib;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> fib = compute_fib(n);
    int max_fib = fib[n - 1];

    for (int i = 0; i < m; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> dims = {a, b, c};
        sort(dims.begin(), dims.end()); // smallest to largest
        bool ok = (max_fib <= dims[1] && max_fib <= dims[2]);
        cout << (ok ? '1' : '0');
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}