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

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int zero_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            zero_count++;
        }
    }

    int left = 0, right = n - 1;

    while (a[left] == 0)
        left++;

    while (a[right] == 0)
        right--;

    bool zero_found = false;

    for (int i = left; i <= right; i++)
    {
        if (a[i] == 0)
        {
            zero_found = true;
        }
    }

    if (zero_count == n)
    {
        cout << 0 << endl;
    }

    else if (zero_found == false)
    {
        cout << 1 << endl;
    }

    else
    {
        cout << 2 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}