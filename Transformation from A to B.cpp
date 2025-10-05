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
    int a, b;
    cin >> a >> b;

    vi ans;
    ans.push_back(b);

    while (b > a)
    {
        if (b % 2 == 0)

            b /= 2;

        else if (b % 10 == 1)

            b /= 10;
        else
            break;
        ans.push_back(b);
    }
    if (b == a)
    {
        cout << "YES\n";
        cout << ans.size() << "\n";
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    else
    {
        cout << "NO\n";
    }
}
int main()
{
    solve();
    return 0;
}