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
    int n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << k << "\n";
        return;
    }
    if (n == k)
    {
        cout << 1 << "\n";
        return;
    }

    if (n < k)
    {
        int a = k / n;
        int b = k % n;
        if (b != 0)
            a++;
        cout << a << "\n";
        return;
    }

    else
    {
        int c = n / k;
        int d = n % k;
        if (d != 0)
            c++;
        k *= c;
        int a = k / n;
        int b = k % n;
        if (b != 0)
            a++;
        cout << a << "\n";
        return;
    }
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

// #include <iostream>
// using namespace std;

// typedef long long ll;

// void solve() {
//     ll n, k;
//     cin >> n >> k;

//     ll x = (n + k - 1) / k; // ceil(n / k)
//     ll sum = x * k;
//     ll result = (sum + n - 1) / n; // ceil(sum / n)
//     cout << result << "\n";
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) solve();
//     return 0;
// }
