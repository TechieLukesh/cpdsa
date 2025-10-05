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
    string a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (i + 1 < n && a[i + 1] != b[i + 1] && a[i] != a[i + 1])
            {
                count++;
                i++;
            }
            else
            {
                count++;
            }
        }
    }

    cout << count << "\n";
}
int main()
{
    solve();
    return 0;
}