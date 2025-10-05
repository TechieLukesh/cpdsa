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
    string layout, s;
    if (!(cin >> layout >> s))
        cout << 0;

    vector<int> pos(26);
    for (int i = 0; i < 26; ++i)
        pos[layout[i] - 'a'] = i;

    int total = 0;
    for (int i = 1; i < (int)s.size(); ++i)
    {
        total += abs(pos[s[i] - 'a'] - pos[s[i - 1] - 'a']);
    }

    cout << total << '\n';
}

int main()
{
    solve();
    return 0;
}