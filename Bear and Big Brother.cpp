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
    int count = 0;

    while (a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        count++;
    }

    cout << count << "\n";
}

int main()
{
    solve();
    return 0;
}