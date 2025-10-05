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
typedef vector<ll> vl;

const int mod = 1000000007;

// void solve()
// {
//     ll n, k, q;
//     cin >> n >> k >> q;

//     vl a(n);

//     vector<bool> days(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];

//         if (a[i] <= q)
//             days.push_back(true);
//         else
//             days.push_back(false);
//     }
//     ll count = 0, total = 0;
//     for (bool val : days)
//     {
//         if (val)
//             count++;

//         else
//         {
//             if (count > 0)
//             {
//                 total += count * (count + 1) / 2;
//                 count = 0;
//             }
//         }
//     }

//     if (count > 0)
//     {
//         total += count * (count + 1) / 2;
//     }

//     cout << total << "\n";
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;

    vl a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vl days;
    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[i] <= q)
            count++;
        else
        {

            days.push_back(count);
            count = 0;
        }
    }

    if (count != 0)
    {
        days.push_back(count);
    }

    // now process days
    ll res = 0;
    for (auto &it : days)
    {
        if (it < k)
            continue;

        ll ans = (it - k + 1) * (it - k + 1 + 1) / 2;

        res += ans;
    }

    cout << res << "\n";
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