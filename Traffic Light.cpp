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
    char c;
    string s;
    cin >> n >> c >> s;

    // if green signal is already there
    if (c == 'g')
    {
        cout << 0 << "\n";
        return;
    }

    // duplicate string for the circular search
    s += s;

    // store the green position

    vi green_idx;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'g')
            green_idx.push_back(i);
    }

    // now iterate over the string to know when after how many seconds green signal comes after 'c' signals and we have to maximize the time
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            for (int g : green_idx)
            {
                if (g > i)
                {
                    ans = max(ans, g - i);
                    break;
                }
            }
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