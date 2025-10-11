#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

void solve()
{
    ull a, b, c;
    cin >> a >> b >> c;

    bool wrong = ((a & b & ~c) != 0ull) || ((b & c & ~a) != 0ull) || ((a & c & ~b) != 0ull);

    if (wrong)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}