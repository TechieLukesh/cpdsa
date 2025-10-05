#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int zeroCnt = 0, negOneCnt = 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            zeroCnt++;
        if (a[i] < 0)
            negOneCnt++;
    }

    int cnt = 0;

    if (negOneCnt % 2 == 0)
        cnt = zeroCnt;

    else
        cnt = zeroCnt + 2;

    cout << cnt << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
