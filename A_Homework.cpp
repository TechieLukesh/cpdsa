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
    string a;
    cin >> a;

    int m;
    cin >> m;

    string b, c;
    cin >> b >> c;

    for (int i = 0; i < m; i++)
    {
        if (c[i] == 'V')
        {
            a.insert(a.begin(), b[i]);
        }
        else
        {
            a.push_back(b[i]);
        }
    }

    cout << a << "\n";
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