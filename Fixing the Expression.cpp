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

    int a = s[0] - '0';
    int b = s[2] - '0';
    if (a == b && (s[1] == '>' || s[1] == '<'))
        s[1] = '=';
    else if (a > b && (s[1] == '<' || s[1] == '='))
        s[1] = '>';
    else if (a < b && (s[1] == '>' || s[1] == '='))
        s[1] = '<';

    cout << s << "\n";
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