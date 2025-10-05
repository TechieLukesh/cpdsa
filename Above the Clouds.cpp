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
    string s;
    cin >> n >> s;

    bool found = false;

    for (int i = 1; i < n - 1; i++)
    {
        string first = s.substr(0, i);
        string middle = s.substr(i, 1);
        string last = s.substr(i + 1);

        if ((first + last).find(middle) != string::npos)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Yes\n";
    else
        cout << "No\n";
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