#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll countValidSubstrings(const string &a, const string &b, int k)
{
    int n = a.size();
    ll ans = 0;

    map<char, int> cnt; // count of mismatched chars in current window
    int left = 0;

    for (int right = 0; right < n; ++right)
    {
        if (a[right] != b[right])
        {
            cnt[a[right]]++;
        }

        // Shrink window if unique mismatched chars > k
        while ((int)cnt.size() > k)
        {
            if (a[left] != b[left])
            {
                cnt[a[left]]--;
                if (cnt[a[left]] == 0)
                    cnt.erase(a[left]);
            }
            left++;
        }

        // Number of substrings ending at 'right' = (right - left + 1)
        ans += (right - left + 1);
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        cout << countValidSubstrings(a, b, k) << "\n";
    }

    return 0;
}
