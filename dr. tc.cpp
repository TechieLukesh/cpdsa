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

    string s;
    cin >> s;

    int one_count = 0;
    for (char ch : s)
    {
        if (ch == '1')
            one_count++;
    }

    int total = 0;

    for (char ch : s)
    {
        if (ch == '1')
        {
            total += one_count - 1;
        }
        else
        {
            total += one_count + 1;
        }
    }

    cout << total << "\n";
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