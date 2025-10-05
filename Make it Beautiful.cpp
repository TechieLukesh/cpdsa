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
        ll n;
        cin >> n;
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] == arr[n - 1])
        {
            cout << "No\n";
            continue;
        }

        cout << "Yes\n";
        cout << arr[n - 1] << " ";

        for (ll i = 0; i < n - 1; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
    return 0;
}