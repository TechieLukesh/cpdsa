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

    for (char c : s)
    {
        c = tolower(c);
        if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i')
            continue;

        res += '.';
        res += c;
    }

    cout << res << "\n";
}

int main()
{

    solve();
    return 0;
}