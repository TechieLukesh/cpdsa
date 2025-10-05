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

int noOps(string &last_two, string &x)
{
    int p = last_two[0];
    int q = last_two[1];

    int steps = 0, j = x.size() - 1;

    while (j > 0 && x[j] != q)
    {
        j--;
        steps++;
    }

    int i = j - 1;

    while (i > 0 && x[i] != p)
    {
        i--;
        steps++;
    }

    return steps;
}

void solve()
{
    ll n;
    cin >> n;

    string x = to_string(n);

    vector<string> lastDigits = {"00", "25", "50", "75"};
    int result = 1e9;

    for (auto lastDigit : lastDigits)
    {
        int mini = noOps(lastDigit, x);
        result = min(mini, result);
    }

    cout << result << "\n";
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