#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define all(x) x.begin(), x.end()
#define vecin(name, len)   \
    vector<int> name(len); \
    for (auto &_ : name)   \
        cin >> _;
#define vecout(v)         \
    for (auto _ : v)      \
        cout << _ << " "; \
    cout << endl;

void solve()
{
    int n;
    cin >> n;
    vecin(a, n);

    unordered_map<int, int> mp;
    for (auto it : a)
    {
        mp[it]++;
    }

    bool isPossible = false;
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            isPossible = true;
            break;
        }
    }

    if (isPossible)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
