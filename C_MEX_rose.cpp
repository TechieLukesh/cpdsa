#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    int missingBelowK = 0;
    int countOfK = freq[k];

    for (int i = 0; i < k; i++)
    {
        if (freq[i] == 0)
            missingBelowK++;
    }

    cout << max(missingBelowK, countOfK) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}