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

int countVK(string &s)
{
    int count = 0;
    for (int i = 0; i + 1 < s.size(); i++)
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
        {
            count++;
        }
    }
    return count;
}

void solve()
{
    string s;
    cin >> s;

    int ans = countVK(s);

    for (int i = 0; i < s.size(); i++)
    {
        string t = s;

        t[i] = t[i] == 'V' ? 'K' : 'V';

        ans = max(ans, countVK(t));
    }

    cout << ans << "\n";
}

int main()
{
    solve();
    return 0;
}