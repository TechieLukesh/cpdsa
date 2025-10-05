#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>

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

    string s;
    cin >> s;

    int maxi = INT_MIN;
    for (int j = 1; j < n; j++)
    {
        set<char> stJ, stI;

        for (int i = 0; i < j; i++)
        {
            stI.insert(s[i]);
        }

        for (int i = j; i < n; i++)
            stJ.insert(s[i]);

        maxi = max((int)(stJ.size() + stI.size()), maxi);
    }

    cout << maxi << "\n";
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