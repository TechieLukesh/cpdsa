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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;

        if (x % k != 0)
        {
            cout << 1 << endl;
            cout << x << endl;
        }

        else
        {
            cout << 2 << endl;
            cout << x - 1 << " " << 1 << endl;
        }
    }
    return 0;
}