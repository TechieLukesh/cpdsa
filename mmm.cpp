#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>

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

    vi a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cout << "No\n";
            return;
        }
    }

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            st.insert(a[i]);
        }
    }

    if (st.size() > 1)
        cout << "No\n";
    else
        cout << "Yes\n";
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