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
    string s;
    cin >> s;

    string ans = "";

    for (int i = 0; i < n;)
    {
        char ch = s[i];
        int j = i + 1;

        while (s[j] != ch && j < n)
        {
            j++;
        }
        if (j < n)
        {
            ans += ch;
            i = j + 1;
        }
        else
        {
            break;
        }
    }

    cout << ans << "\n";
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