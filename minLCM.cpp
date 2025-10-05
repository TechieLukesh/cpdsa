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

int gcd(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long lcm(int a, int b)
{
    return (1LL * a * b) / gcd(a, b);
}

void solve()
{
    int n;
    cin >> n;

    int x = 1, y = n - 1;
    long long minLCM = lcm(x, y);

    for (int i = max(1, n / 2 - 5); i <= min(n - 1, n / 2 + 5); ++i)
    {
        int a = i, b = n - i;
        long long currentLCM = lcm(a, b);
        if (currentLCM < minLCM)
        {
            minLCM = currentLCM;
            x = a;
            y = b;
        }
    }

    cout << x << " " << y << "\n";
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