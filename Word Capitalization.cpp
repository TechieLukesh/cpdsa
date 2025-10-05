#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cctype>

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

    if (!s.empty())

        s[0] = toupper(s[0]);

    cout << s << "\n";
}

int main()
{
    solve();
    return 0;
}