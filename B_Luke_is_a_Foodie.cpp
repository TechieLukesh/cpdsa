#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
    }
    int maxi = INT_MIN;
    vector<pair<int, int>> p;
    for (auto i = st.begin(); i != st.end(); i++)
    {
        int miniR = *i - x;
        int maxiR = *i + x;
        p.push_back({miniR, maxiR});
        maxi = min(maxi, maxiR);
    }
    int cnt = 0;
    for (auto &it : p)
    {
        int i = it.first;
        int j = it.second;
        for (int k = i; k <= j; k++)
        {
            if (k != maxi)
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