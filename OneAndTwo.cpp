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
        int n;
        cin >> n;

        vector<int> a(n);

        int two = 0;
        int prefix_two = 0;
        int key = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] == 2)
            {
                two++;
            }
        }

        if (two % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
            {
                prefix_two++;
            }

            if (prefix_two = two / 2)
            {
                key = i;
                break;
            }
        }

        cout << key + 1 << endl;
    }
    return 0;
}