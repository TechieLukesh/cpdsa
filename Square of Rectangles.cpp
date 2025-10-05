#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <cmath>

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
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    int a = l1 * b1 + l2 * b2 + l3 * b3;

    int s = sqrt(a);

    if (max({l1, b1, l2, b2, l3, b3}) > s || s * s != a)
    {
        cout << "No\n";
        return;
    }

    bool ans = false;

    ans |= (b1 == s && b2 == s && b3 == s && l1 + l2 + l3 == s);
    ans |= (l1 == s && l2 == s && l3 == s && b1 + b2 + b3 == s);
    ans |= (l3 == l2 && l1 + l2 == s && b3 + b2 == s && b1 == s);
    ans |= (l1 == s && s == l2 + l3 && b1 + b2 == s && b2 == b3);

    if (ans)

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