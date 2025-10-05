#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll x;
    cin >> x;
    x = llabs(x); // absolute value
    if (x == 0)
    {
        cout << 0 << "\n";
        return;
    }

    ll k = 0;
    ll sum = 0;
    while (true)
    {
        k++;
        sum += k;
        ll diff = sum - x;
        if (sum >= x && (diff % 2 == 0))
        {
            cout << k << "\n";
            break;
        }
    }
}

int main()
{
    solve();
    return 0;
}
