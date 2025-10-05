#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll solve(ll n, ll p, vector<pll> &arr)
{
    for (ll i = 0; i < n; i++)
    {
        arr[i].first = min(p, arr[i].first);
    }

    sort(arr.begin(), arr.end());

    if (p <= arr[0].first)
    {
        return p * n;
    }

    ll countPeople = 1;
    ll cost = p;

    for (ll i = 0; i < n; i++)
    {
        if (countPeople + arr[i].second >= n)
        {
            cost += (n - countPeople) * arr[i].first;
            break;
        }
        cost += arr[i].second * arr[i].first;
        countPeople += arr[i].second;
    }

    return cost;
}

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        ll n, p;
        cin >> n >> p;
        vector<pll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i].second; // count
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i].first; // cost
        }

        cout << solve(n, p, arr) << "\n";
    }
    return 0;
}
