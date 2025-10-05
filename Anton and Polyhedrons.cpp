#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <string>

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
    unordered_map<string, int> mp = {{"Tetrahedron", 4},
                                     {"Cube", 6},
                                     {"Octahedron", 8},
                                     {"Dodecahedron", 12},
                                     {"Icosahedron", 20}

    };
    int ans = 0;
    while (n--)
    {
        string s;
        cin >> s;
        ans += mp[s];
    }

    cout << ans << "\n";
}

int main()
{
    solve();
    return 0;
}