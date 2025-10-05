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

bool canCover(vector<int> &a, int m)
{
    int n = a.size();
    int i = 0, carvers = 0;

    while (i < n && carvers < 3)
    {
        int cover_until = a[i] + 2 * m;

        while (i < n && a[i] <= cover_until)

            i++;

        carvers++;
    }

    return i == n;
}

int solve(vector<int> &a)
{
    sort(a.begin(), a.end());
    int l = 0, r = 1e9, ans = 1e9;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (canCover(a, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        cout << solve(a) << "\n";
    }
    return 0;
}