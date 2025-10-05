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

    vi freq(10, 0);

    for (char ch : s)

    freq[ch - '0']++;
    string res = "";
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (freq[j] > 0 && j >= 9 - i)
            {
                res.push_back(j + '0');
                freq[j]--;
                break;
            }
        }
    }

    cout << res << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)

        solve();

    return 0;
}