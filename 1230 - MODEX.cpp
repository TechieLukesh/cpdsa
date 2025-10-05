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

ll mod_exp(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main()
{
    string line;
    while (true)
    {
        string s[3];
        int count = 0;

        while (count < 3 && getline(cin, line))
        {
            if (line.empty())
                continue;
            s[count++] = line;
        }

        if (count != 3)
            break;
            
        ll B = stoll(s[0]);
        ll P = stoll(s[1]);
        ll M = stoll(s[2]);

        cout << mod_exp(B, P, M) << "\n";
    }

    return 0;
}