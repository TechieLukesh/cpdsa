#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> vis(n + 1, 0);

    int cnt = 0;

    for (auto &it : a)
    {
        if (!vis[it])
        {
            vis[it] = 1;
            cnt++;
        }
    }

    cout << cnt << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}