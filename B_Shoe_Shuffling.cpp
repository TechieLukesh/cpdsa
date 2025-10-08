#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> s(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        mp[s[i]]++;
    }

    int flag = 0;

    for (auto it : mp)
    {
        if (it.second == 1)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "-1" << "\n";
        return;
    }

    vector<int> stud(n);

    for (int i = 0; i < n; i++)
        stud[i] = i + 1;

    int l = 0, r = 0;

    while (r < n)
    {
        if (s[l] == s[r])
            r++;
        else
        {
            rotate(stud.begin() + l, stud.begin() + l + 1, stud.begin() + r);
            l = r;
        }
    }
    rotate(stud.begin() + l, stud.begin() + l + 1, stud.begin() + r);

    for (auto it : stud)

        cout << it << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}