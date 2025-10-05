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
    string s;
    cin >> s;

    int zero_count = count(s.begin(), s.end(), '0');
    int o_count = s.length() - zero_count;

    int total_moves = min(zero_count, o_count);

    if (total_moves % 2 == 0)
        cout << "NET\n";
    else
        cout << "DA\n";
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