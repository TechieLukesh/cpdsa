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
    string a;
    cin >> a;

    string result;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'p')
        {
            result.push_back('q');
        }

        else if (a[i] == 'q')
        {
            result.push_back('p');
        }

        else if (a[i] == 'w')
        {
            result.push_back('w');
        }
    }
    reverse(result.begin(), result.end());

    cout << result << " \n";
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