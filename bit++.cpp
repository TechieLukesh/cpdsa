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
    int x = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] == '+' || (s[0] == 'X' && s[1] == '+'))
            x++;

        else if (s[0] == '-' || (s[0] == 'X' && s[1] == '-'))
            x--;
    }

    cout << x << "\n";
}

int main()
{

    solve();

    return 0;
}