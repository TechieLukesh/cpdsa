#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>

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
    int n, h;
    cin >> n >> h;

    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cntLessH = 0, cntMoreH = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
            cntMoreH++;
        else
            cntLessH++;
    }

    int ans = (cntLessH * 1) + (cntMoreH * 2);
    cout << ans << "\n";
}
int main()
{
    solve();

    return 0;
}