#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            a[i]++;
        }
    }

    
    for (ll i = 0; i < n - 1; i++)
    {
       
        while (a[i + 1] % a[i] == 0)
        {
            a[i + 1]++;
        }
    }

    
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << "\n";
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