#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <map>

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
    //     0 1 3 3 7 0
    // chose max. element to make array identical
    // for this first clone
    // and then swap any two elements with max. element
    // 0 1 7 0 7 0
    // 0 1 3 3 3 3
    // again clone
    // 0 1 3 3 3 3
    // now again swap
    // 0 1 3 3 0 1
    // 3 3 3 3 3 3

    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        mp[a[i]]++;
    }

    // finding the max. element

    int freq = 0;

    for (auto it : mp)
    {
        freq = max(freq, it.second);
    }

    int ops = 0;

    while (freq < n)
    {
        ops++;

        if (n - freq >= freq)
        {

            ops += freq;
            freq *= 2;
        }
        else
        {
            ops += n - freq;
            freq = n;
        }
    }

    cout << ops << "\n";
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