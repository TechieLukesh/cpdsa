#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

bool is2K(int n)
{
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
            return true;
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;

    vi isPrime(n + 1, 1);
    isPrime[0] = 0, isPrime[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    if (isPrime[n] && is2K(n))
        cout << "No\n";
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