#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
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
    int n, m, b;
    cin >> n >> m;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> b;

    int flag = 0;
    a[0] = min(a[0], b - a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {

            a[i] = b - a[i];

            if (a[i] < a[i - 1])
            {
                flag = 1;
                break;
            }
        }

        else if (b - a[i] >= a[i - 1] && a[i] > b - a[i])

            a[i] = b - a[i];
    }

    if (flag)
        cout << "No\n";
    else
        cout << "Yes\n";
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