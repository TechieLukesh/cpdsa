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
        ll n, k;
        cin >> n >> k;

        if (n % 2 == 0)
        {
            cout << "Yes" << endl;
            continue;
        }
        if (k % 2)
        {
            cout << "Yes" << endl;
            continue;
        }

        cout << "No" << endl;
    }
    return 0;
}
