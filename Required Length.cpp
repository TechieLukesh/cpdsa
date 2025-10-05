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
    string p;
    cin >> p;
    int l;
    cin >> l;

    if (p.size() >= l)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main()
{
    solve();
    return 0;
}