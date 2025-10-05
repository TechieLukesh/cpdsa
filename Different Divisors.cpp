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

bool isPrime(int x)
{
    if (x < 2)
        return false;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    int d;
    cin >> d;

    int p = d + 1;
    while (!isPrime(p))
        p++;

    int q = p + d;
    while (!isPrime(q))
        q++;

    cout << p * q << "\n";
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