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

    string res = "";
    int i = 0;
    while (i < s.size())
    {
        if (s[i] == '.')
        {
            res += '0';
            i++;
        }

        else if (s[i] == '-')
        {
            if (s[i + 1] == '.')
            {
                res += '1';
                i += 2;
            }

            else if (s[i + 1] == '-')
            {
                res += '2';
                i += 2;
            }
        }
    }

    cout << res << "\n";
}

int main()
{
    solve();
    return 0;
}