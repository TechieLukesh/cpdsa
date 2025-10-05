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
    vi a(4);
    for (int i = 0; i < 4; i++)
        cin >> a[i];

    set<int> st;

    for (int i = 0; i < 4; i++)

        st.insert(a[i]);

    cout << 4 - st.size() << "\n";
}

int main()
{
    solve();
    return 0;
}