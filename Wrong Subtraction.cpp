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
    for (int i = 0; i < k; i++)
    {
        if (n % 10 != 0)

            n--;

        else
            n /= 10;
    }

    cout << n << "\n";
}

int main()
{
    solve();
    return 0;
}