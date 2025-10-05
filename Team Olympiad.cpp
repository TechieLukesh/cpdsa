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
    vi t(n);

    for (int i = 0; i < n; i++)
        cin >> t[i];

    vi prog, math, pe;

    for (int i = 0; i < n; i++)
    {
        if (t[i] == 1)
            prog.push_back(i + 1);
        else if (t[i] == 2)
            math.push_back(i + 1);
        else
            pe.push_back(i + 1);
    }

    int maxGroup = min({prog.size(), math.size(), pe.size()});

    cout << maxGroup << "\n";

    for (int i = 0; i < maxGroup; i++)
        cout << prog[i] << " " << math[i] << " " << pe[i] << "\n";
}

int main()
{
    solve();
    return 0;
}