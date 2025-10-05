// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// #include <queue>

// using namespace std;

// typedef long long ll;
// typedef pair<int, int> ii;
// typedef pair<ll, ll> pll;
// typedef vector<ii> vii;
// typedef vector<pll> vpl;
// typedef vector<int> vi;

// const int mod = 1000000007;

// struct Compare
// {
//     bool operator()(pair<int, int> &a, pair<int, int> &b)
//     {
//         if (a.first == b.first)
//             return a.second > b.second;
//         return a.first < b.first;
//     }
// };

// vector<int> solve(vector<int> &a, int n, int k)
// {
//     priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
//     vector<int> ans;

//     for (int i = 0; i < n; i++)
//     {
//         pq.push({a[i], i});
//     }

//     while (!pq.empty())
//     {
//         pair<int, int> front = pq.top();
//         pq.pop();

//         int val = front.first;
//         int idx = front.second;

//         val -= k;

//         if (val > 0)
//         {
//             pq.push({val, idx});
//         }
//         else
//         {
//             ans.push_back(idx + 1);
//         }
//     }

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
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         vector<int> ans = solve(a, n, k);

//         for (int idx : ans)
//         {
//             cout << idx << ' ';
//         }
//         cout << '\n';
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vpl;
typedef vector<int> vi;

const int mod = 1000000007;

bool comp(pll &a, pll &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vpl a(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i].first;

            a[i].first %= k;

            if (a[i].first == 0)
                a[i].first = k;

            a[i].second = i + 1;
        }

        sort(a.begin(), a.end(), comp);

        for (auto &i : a)
        {
            cout << i.second << ' ';
        }
        cout << '\n';
    }

    return 0;
}