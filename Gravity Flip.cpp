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

    vi a(101, 0);

    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;

        a[h]++;
    }

    for (int h = 1; h <= 101; h++)
    {
        while (a[h]--)
        {
            cout << h << " ";
        }
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