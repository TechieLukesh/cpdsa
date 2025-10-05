#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
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
    ll x;
    cin >> x;

    if (x == 9)
        cout << 9 << "\n";
    else
    {
        string llToStr = to_string(x);
        string res = "";
        for (int i = 0; i < llToStr.size(); i++)
        {
            int dig = llToStr[i] - '0';
            int invDig = 9 - dig;

            if (i == 0 && dig == 9)
                res.push_back('9');

            else
                res.push_back(min(dig, invDig) + '0');
        }

        int strToLL = stoll(res);
        cout << res << "\n";
    }
}

int main()
{
    solve();

    return 0;
}