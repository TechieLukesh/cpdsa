#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    cout << 2 * (st.size()) - 1 << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}