#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <set>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;
typedef vector<bool> vb;

const int mod = 1000000007;

// int solve(vi &a, vi &b, int n, int k)
// {
//     unordered_map<int, int> mp;

//     for (int i = 0; i < n; i++)
//     {

//         if (b[i] != -1)
//         {
//             int sum = a[i] + b[i];
//             mp[sum]++;
//         }
//     }

//     int ans = -1;
//     vi bVal;
//     for (auto &it : mp)
//     {
//         if (it.second > 1)
//         {
//             ans = 0;
//             break;
//         }

//         for (int i = 0; i < a.size(); i++)
//         {
//             if (b[i] == -1)
//                 bVal.push_back(it.first - a[i]);
//         }
//     }

//     int minEl = *min_element(bVal.begin(), bVal.end());
//     ans = k - minEl;
//     return ans;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         vi a(n);
//         vi b(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }

//         cout << solve(a, b, n, k) << "\n";
//     }
//     return 0;
// }

int solve(vi &a, vi &b, int n, int k)
{
    set<int> possible_x;

    // first, determine x from known values
    int fixed_x = -1;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {
            int cur_x = a[i] + b[i];
            if (fixed_x == -1)
                fixed_x = cur_x;
            else if (fixed_x != cur_x)
                return 0; // inconsistent x
        }
    }

    // If fixed_x is not determined, any x is allowed
    if (fixed_x == -1)
    {
        // Try all x in range [a[i], a[i] + k] so that b[i] in [0, k]
        int low = 0, high = 1e9 + 1;
        for (int i = 0; i < n; i++)
        {
            int cur_low = a[i];
            int cur_high = a[i] + k;
            low = max(low, cur_low);
            high = min(high, cur_high);
        }
        int count = high - low + 1;
        return (count >= 0) ? count : 0;
    }
    else
    {
        // Check whether all unknown b[i] = fixed_x - a[i] are in [0, k]
        for (int i = 0; i < n; i++)
        {
            if (b[i] == -1)
            {
                int bi = fixed_x - a[i];
                if (bi < 0 || bi > k)
                    return 0;
            }
        }
        return 1;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vi a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        cout << solve(a, b, n, k) << '\n';
    }
    return 0;
}