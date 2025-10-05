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

    vi a(n);

    bool isHard = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            isHard = true;
    }

    if (isHard)
        cout << "Hard\n";
    else
        cout << "Easy\n";
}

int main()
{
    solve();
    return 0;
}