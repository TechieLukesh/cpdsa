#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, r, b;
    cin >> n >> r >> b;

    string ans;

    int rLen = r / (b + 1);
    int rMore = r % (b + 1);

    for (int i = 1; i <= b + 1; i++)
    {
        for (int j = 0; j < rLen; j++)

            ans += 'R';
        if (rMore > 0)
        {
            ans += 'R';
            rMore--;
        }
        if (i != b + 1)
            ans += 'B';
    }

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}