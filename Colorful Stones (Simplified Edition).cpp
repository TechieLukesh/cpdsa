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
    string s, t;
    cin >> s >> t;

    int i = 0;
    int j = 0;
    while (i < t.size())
    {
        if (s[j] == t[i])
            j++;
        i++;
    }

    cout << j + 1 << "\n";
}

int main()
{
    solve();
    return 0;
}